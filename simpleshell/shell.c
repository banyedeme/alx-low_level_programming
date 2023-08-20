#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <signal.h>

#define MAX_INPUT_LENGTH 1024

void display_prompt() {
    write(STDOUT_FILENO, "$ ", 2);
    fflush(stdout);
}

void execute_command(const char *command) {
    struct stat st;
    pid_t child_pid;
    int status;

    if (stat(command, &st) == 0) {
        if (S_ISREG(st.st_mode)) {
            child_pid = fork();

            if (child_pid == -1) {
                perror("fork");
                return;
            }

            if (child_pid == 0) {
                char *argv[] = {command, NULL};
                execve(command, argv, NULL);
                perror("execve");
                _exit(EXIT_FAILURE);
            } else {
                waitpid(child_pid, &status, 0);
            }
        } else {
            write(STDOUT_FILENO, "Error: Not a regular file\n", 27);
        }
    } else {
        perror("stat");
    }
}

int main() {
    char input[MAX_INPUT_LENGTH];

    while (1) {
        display_prompt();

        if (fgets(input, sizeof(input), stdin) == NULL) {
            // Handle end of file (Ctrl+D)
            write(STDOUT_FILENO, "\n", 1);
            break;
        }

        input[strlen(input) - 1] = '\0'; // Remove the newline character

        execute_command(input);
    }

   return 0;
}
