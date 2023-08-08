#include "shell.h"

/**
 * _strcat - concatenates strings
 * @src: source
 * @dest: destination
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int des = 0, ser = 0;

	for (; dest[des] != '\0'; des++)
		;
	for (; src[ser] != '\0'; ser++)
	{
		dest[des] = src[ser];
		des++;
	}
	dest[des] = '\0';
	return (dest);
}
