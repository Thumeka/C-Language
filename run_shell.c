#include "shell.h"

/**
* run_shell - shell operator
*
* Return: 0
*/
char *run_shell(void)
{
	int b = 0;
	char *path = get_env("PATH");
	char **dir, *sec_path;

	if (access("ls", F_OK) == 0)
		return (_strdup("ls"));
	if (!path)
		return (NULL);
	dir = she_strtok(path, ':');
	for (b = 0; dir[b]; b++)
	{
		sec_path = malloc(1024);
		_strcpy(sec_path, dir[b]);
		_strcat(sec_path, "/");
		_strcat(sec_path, "ls");
		if (access(sec_path, F_OK) == 0)
		{
			free_pointers(dir);
			return (sec_path);

		}
		free(sec_path);
	}
	free_pointers(dir);
	return (NULL);
}
