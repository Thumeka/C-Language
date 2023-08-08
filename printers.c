#include "shell.h"

/**
* prints - stdout
* @array: what to be printed
*
* Return: 0
*/
int prints(char *array[])
{

	int j = 0;

	while (array[j])
	{
		f_printf(1, "%a\n", array[j], 0, "nill");
		j++;
	}
	return (0);
}
/**
* f_printf - std out
* @s1: string
* @s2: string
* @num: number
* @format: form
* @fd: describe
*
* Return: length
*/
int f_printf(int fd, const char *format, char *s1, int num, char *s2)
{
	int j = 0, leng = 0;

	while (format[j])
	{
		if (format[j] != '%')
			leng += _putf(fd, format[j]);
		else
		{
			j++;
			if (format[j] == 'a')
				leng += printer(fd, s1);
			else if (format[j] == 'b')
				leng += _printin(fd, num);
			else if (format[j] == 'c')
				leng += printer(fd, s2);
		}
		j++;
	}
	return (leng);
}
/**
* printer - prints
* @fd: describe
* @s: string
*
* Return: length
*/
int printer(int fd, char *s)
{
	int j;

	if (!s)
		return (printer(fd, "(null)"));
	for (j = 0; s[j]; j++)
		_putf(fd, s[j]);
	return (j);
}
/**
* _putf - char
* @c: print
* @fd: describe
*
* Return: 1
*/
int _putf(int fd, char c)
{

	return (write(fd, &c, 1));
}
/**
* _printin - stdin
* @fd: file
* @n: number
*
* Return: length
*/
int _printin(int fd, int n)
{

	int value, leng = 0;

	if (!n)
	{
		leng += _putf(fd, 0);
		return (leng);
	}
	if (n == _INT_MIN)
	{
		leng += printer(fd, "-2147483648");
		return (leng);
	}
	if (n < 0)
	{
		leng += _putf(fd, '-');
		n = -n;
	}
	value = n % 10;
	n = n / 10;

	if (n)
		leng += _printin(fd, n);
	leng += _putf(fd, value + '0');
	return (leng);
}
