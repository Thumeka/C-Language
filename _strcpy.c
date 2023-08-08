#include "shell.h"

/**
 * _strcpy - copy the string
 * @src: source
 * @dest: destination
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
		dest[len] = src[len];
	dest[len] = '\0';
	return (dest);
}
