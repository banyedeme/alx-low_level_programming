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
void execute_command(const char *input_command) {
	/* Tokenize the input command into arguments*/
	char *arguments[32]; /* You can adjust the size as needed */
	int arg_count = 0;
	int status;
	pid_t child_pid;
	char *path;
	char *path_copy;
	char **env;


	char *token = strtok((char *)input_command, " ");
	while (token != NULL) {
		arguments[arg_count++] = token;
		token = strtok(NULL, " ");
	}
	arguments[arg_count] = NULL;


	/* Check if the user entered "env" as the command */
	if (strcmp(arguments[0], "env") == 0) {
		/* Print the current environment */
		extern char **environ;
		for (env = environ; *env != NULL; env++) {
			write(1, *env, strlen(*env));
			write(1, "\n", 1);
		}
		return;
	}


	if (access(arguments[0], X_OK) != -1) {
		child_pid = fork();

		if (child_pid == -1) {
			perror("fork");
			return;
		}

		if (!child_pid) {
			execve(arguments[0], arguments, NULL);
			perror("execve");
			_exit(EXIT_FAILURE);
		} else {
			waitpid(child_pid, &status, 0);
			return;
		}
	}
	/* Try to find the command in directories listed in PATH */
	path = getenv("PATH");
	path_copy = strdup(path);

	if (path_copy != NULL) {
		token = strtok(path_copy, ":");
		while (token != NULL) {
			char command_path[1024];
			snprintf(command_path, sizeof(command_path), "%s/%s", token, arguments[0]);
			if (access(command_path, X_OK) != -1) {
				child_pid = fork();

				if (child_pid == -1) {
					perror("fork");
					free(path_copy);
					return;
				}

				if (!child_pid) {
					execve(command_path, arguments, NULL);
					perror("execve");
					_exit(EXIT_FAILURE);
				} else {
					waitpid(child_pid, &status, 0);
					free(path_copy);
					return;
				}
			}
			token = strtok(NULL, ":");
		}

		free(path_copy);
	}

	write(1, "Command not found or not executable.\n", 38);
}

/**
 * main - entry point
 *@Return: 0 success
 */

int main(void) {
	char input[1024];

	for (;;) {
		write(1, "Simple_shell$ ", 14);
		fflush(stdout);

		if (fgets(input, sizeof(input), stdin) == NULL) {
			write(1, "\n", 1);
			break;
		}

		input[strlen(input) - 1] = '\0';

		execute_command(input);
	}

	return (0);
}
