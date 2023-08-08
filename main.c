#include "shell.h"

/**
 * main - run the program
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	hsh = argv[0];
	shell_input = 0;
	status_t = 0;

	(void)argc;

	while (++shell_input)
	{
		create_prompt("$ ");

		read_line(&line);

		command  = she_strtok(line, ' ');
		status_t = execute();

		free(line);
		free_pointers(command);
	}
	return (status_t);
}
