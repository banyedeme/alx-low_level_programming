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
 *execute_command - funct for executions
 *@command: yee
 *return: 0
 */
void execution(const char *inPutCommand)
{
	char *command = strdup(inPutCommand); /* Copy input_command to avoid modifying it*/
    	char *token;
	struct stat st;
	pid_t child_pid;
	int status;

    if (!command)
    {
        perror("strdup");
        return;
    }

     token = strtok(command, " "); /* Split the input by space to get the command*/
    if (!token)
    {
        free(command);
        return; /* No command found */
    }

	if (!stat(inPutCommand, &st))
	{
		if (S_ISREG(st.st_mode))
		{
			child_pid = fork();

			if (child_pid == -1)
			{
				perror("fork");
				free(command); /* command */
				return;
			}

			if (!child_pid)
			{
				/* char *argv[] = {(char *)command, NULL}; */
				char **argv = (char **)malloc(2 * sizeof(char *));
				if (argv == NULL) {
					perror("malloc");
					free(command);
					exit(EXIT_FAILURE);
				}

				argv[0] = strdup(token); /* token change */
				if (argv[0] == NULL) {
					perror("strdup");
					free(command);
					free(argv);
					exit(EXIT_FAILURE);
				}
				argv[1] = NULL;

				execve(token, argv, NULL);
				perror("execve");
				_exit(EXIT_FAILURE);
			}
			else
			{
				waitpid(child_pid, &status, 0);
			}
		}
		else
		{
			write(1, "Error: Not a regular file\n", 27);
		}
	}
	else
	{
		perror("stat");
	}
	free(command);
}
/**
 *main -entry to main funct
 *Return: 0
 */
int main(void)
{
	char input[1024];

	for (;;)
	{
		write(1,"Simple_shell$ ",14);
		fflush(stdout);

		if (fgets(input, sizeof(input), stdin) == NULL)
		{

			write(1, "\n", 1);
			break;
		}

		input[strlen(input) - 1] = '\0';

		execution(input);
	}

	return (0);
}
