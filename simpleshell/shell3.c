#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <signal.h>

/**
 * execute_command - function for executions
 * @input_command: user input command
 */
void execute_command(const char *input_command)
{
	/* Tokenize the input command into arguments */
	char *arguments[32]; /* You can adjust the size as needed */
	int arg_count = 0;
	int status;
	pid_t child_pid;
	char **env;
	char *path;
	char path_buffer[1024];
	int path_idx = 0;
	int i = 0;
	int j = 0;
	extern char **environ;
	char *current_env = *env;
	char *token = strtok((char *)input_command, " ");


	while (token != NULL)
	{
		arguments[arg_count++] = token;
		token = strtok(NULL, " ");
	}
	arguments[arg_count] = NULL;


	/* Check if the user entered "env" as the command */
	if (arguments[0] && arguments[0][0] == 'e' && arguments[0][1] == 'n'
			&& arguments[0][2] == 'v' && arguments[0][3] == '\0')
	{
		/* Print the current environment */

		for (env = environ; *env != NULL; env++)
		{
			while (current_env[j] != '\0')
			{
				write(1, &current_env[j], 1);
				j++;
			}
			write(1, "\n", 1);
		}
		return;
	}

	/* Try to execute the command using the full path */
	if (access(arguments[0], X_OK) != -1)
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("fork");
			return;
		}

		if (!child_pid)
		{
			execve(arguments[0], arguments, NULL);
			perror("execve");
			_exit(EXIT_FAILURE);
		}
		else
		{
			waitpid(child_pid, &status, 0);
			return;
		}
	}

	/* Try to find the command in directories listed in PATH */
	path = getenv("PATH");

	for (; path[i]; i++)
	{
		if (path[i] != ':')
		{
			path_buffer[path_idx++] = path[i];
		}
		else
		{
			path_buffer[path_idx] = '/';
			path_buffer[path_idx + 1] = '\0';

			/* Use write to concatenate characters */
			write(1, arguments[0], strlen(arguments[0]));
			write(1, path_buffer, path_idx);

			if (access(path_buffer, X_OK) != -1)
			{
				child_pid = fork();

				if (child_pid == -1)
				{
					perror("fork");
					return;
				}

				if (!child_pid)
				{
					execve(path_buffer, arguments, NULL);
					perror("execve");
					_exit(EXIT_FAILURE);

				}
				else
				{
					waitpid(child_pid, &status, 0);
					return;
				}
			}

			path_idx = 0;
		}
	}

	write(1, "Command not found or not executable.\n", 38);
}

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char input[1024];

	for (;;)
	{
		write(1, "Simple_shell$ ", 14);
		fflush(stdout);

		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			write(1, "\n", 1);
			break;
		}

		input[strlen(input) - 1] = '\0';

		execute_command(input);
	}

	return (0);
}
