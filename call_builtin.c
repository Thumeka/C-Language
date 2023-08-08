#include "shell.h"

/**
 * call_builtin - builtins
 * @command: to be called
 * Return: 0
 */
int call_builtin(char *command[])
{
	if (!command[0])
		return (0);
	if (_strcmp(command[0], "exit") == 0)
	{
		status_t = name_exit(command[1]);
		return (status_t);
	}
	if (_strcmp(command[0], "env") == 0)
	{
		prints(environ);
		return (0);
	}
	return (-1);
}

/**
 * name_exit - exit shell
 * @exit_stat: status
 * Return: 2
 */
int name_exit(char *exit_stat)
{
	if (!exit_stat)
	{
		free(line);
		free_pointers(command);
		exit(status_t);
	}
	status_t = she_atoi(exit_stat);

	if (status_t >= 0)
	{
		free(line);
		free_pointers(command);
		exit(status_t);
	}

	f_printf(2, "%s: %s: exit: ", hsh, shell_input, "nill");
	f_printf(2, "Illegal number: %s\n", exit_stat, 0, "nill");

	return (2);
}

