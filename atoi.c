#include "shell.h"

/**
 * she_atoi - string to integer
 * @s: string
 *
 * Return: integer
 */
int she_atoi(const char *s)
{
	int a = 0;
	int sum = 1;
	int b = 0;

	if (s[0] == '-')
	{
		sum -= 1;
		b++;
	}
	while  (s[b] != '\0')
	{
		if (s[b] < '0' || s[b] > '9')
			return (-2);
		a = a * 10 + (s[b] - '0');
		b++;
	}
	return (sum * a);
}
