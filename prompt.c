#include "shell.h"

/**
 * create_prompt - the dollar sign
 *
 * Return: 0
 */
int create_prompt(void)
{
	if (isatty(0))
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
	return (0);
}
