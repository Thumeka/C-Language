#include "shell.h"

/**
 * free_pointers - free pointer
 * @s: array
 * Return: void
 */
void free_pointers(char **s)
{
	int a;

	if (!s)
		return;
	for (a = 0; s[a] != NULL; a++)
		free(s[a]);
	free(s);
}
