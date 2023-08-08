#include "shell.h"

/**
 * execute - execute commands
 *
 * Return: 0
 */
int execute(void)
{
	char *path = run_shell();
	int status = 0;
	pid_t pid;

	if (command[0] != NULL && call_builtin(command) == 0)
	{
		path = run_shell();
		if (path)
		{
			pid = fork();
			if (pid == -1)
			{
				perror("fork");
				return (1);
			}
			else if (pid == 0)
			{
				execve(path, command, environ);
				perror("execve");
				exit(EXIT_FAILURE);
			}
			else
			{
				waitpid(pid, &status, 0);
				if (WIFEXITED(status))
					status_t = WEXITSTATUS(status);
			}
		}
		else
		{
			f_printf(2, "%s: %s: %s: not found\n", hsh, shell_input, command[0]);
			return (127);
		}
		free(path);
	}
	else
	{
		perror("did not exit");
		status_t = 1;
	}
	return (status_t);
}
