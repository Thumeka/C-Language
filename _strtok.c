#include "shell.h"

/**
* she_strtok - breaks string str into a series of tokens
* @str: string
* @delim: delimiters
* Return: pointer
*/
char **she_strtok(char *str, char delim)
{
	int a = 0, b = 0, c = 0;
	int i = 0;
	int tok_len = _strlen(str);
	char **arry = (char **)malloc(sizeof(char *) * (tok_len + 1));
	char *bufs = (char *)malloc(sizeof(char) * (tok_len + 1));

	while (arry == NULL || bufs == NULL)
	{
		free(arry);
		free(bufs);
		return (NULL);
	}

	for (; a < tok_len + 1; a++)
	{
		if (str[a] != delim && str[a] != '\0')
		{
			bufs[b] = str[a];
			b++;
		}
		else
		{
			if (b > 0)
			{
				bufs[b] = '\0';
				arry[c] = malloc(sizeof(char) * (b + 2));
				if (arry[c] == NULL)
				{
					for (i = 0; i < c; i++)
					{
						free(arry[i]);
					}
					free(arry);
					free(bufs);
					return (NULL);
				}

				_strcpy(arry[c++], bufs);
				b = 0;
			}
		}
	}
	arry[c] = NULL;
	free(bufs);
	return (arry);
}
