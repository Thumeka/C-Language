#include "shell.h"

/**
 * read_line - its a getline function
 * @line: what to read
 *
 * Return: error -1
 */
size_t read_line(char **line)
{
	ssize_t size = 0;
	char *buffer = calloc(8096, sizeof(char));

	while ((read(0, &buffer[size], 1)) > 0 && (buffer[size] != '\n'))
		size++;
	if (buffer[size] == '\n')
	{
		*line = malloc(sizeof(char) * (size + 1));
		buffer[size] = '\0';
		_strcpy(*line, buffer);
		free(buffer);
		return (size);
	}
	else if (size != 0)
	{
		buffer[size] = '\0';
		*line = malloc(sizeof(char) * (size + 1));
		_strcpy(*line, buffer);
		free(buffer);
		return (-1);
	}
	else
	{
		if (isatty(0))
		{
			f_printf(1, "\n", "nill", 0, "nill");
		}
		free(buffer);
		exit(status_t);
	}
}
