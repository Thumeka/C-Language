#include "shell.h"

/**
 * _strncmp - string compare
 * @s1: first
 * @s2: second
 * @n: number
 *
 * Return: 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t j;

	for (j = 0; j < n; j++)
	{
		if (s1[j] != '\0' && s1[j] != s2[j])
			return (s1[j] - s2[j]);
	}
	return (0);
}

/**
 * get_env - finds environ
 * @index: search for in the string
 * Return: pointer
 */
char *get_env(char *index)
{
	int tok_len = _strlen(index);
	int len;

	for (len = 0; environ[len]; len++)
	{
		if (!_strncmp(environ[len], index, tok_len) && environ[len][tok_len] == '=')
		{
			return (environ[len] + tok_len + 1);
		}
	}
	return (NULL);
}
