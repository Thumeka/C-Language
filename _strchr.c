#include "shell.h"

/**
 * _strchr - show character
 * @str: string
 * @c: char
 *
 * Return: pointer
 */
char *_strchr(char *str, char c)
{
	char j;

	while (1)
	{
		j = *str++;
		if (j == c)
			return (str - 1);
		if (!j)
			return (NULL);
	}
}
