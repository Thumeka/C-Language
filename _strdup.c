#include "shell.h"

/**
 * _strdup - duplicate
 * @str: string
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *dup, *dupli_c;
	size_t len;

	if (!str)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	dupli_c = malloc(sizeof(char) * len + 1);
	if (!dupli_c)
		return (NULL);
	dup = dupli_c;

	while (*str)
	{
		*dup = *str;
		str++;
		dup++;
	}
	*dup = '\0';
	return (dupli_c);
}
