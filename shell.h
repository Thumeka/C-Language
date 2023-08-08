#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include <stddef.h>
#include <errno.h>
#include <limits.h>
#include <stdarg.h>

#define _INT_MIN (1 << (sizeof(int) * 8 - 1))

int she_atoi(const char *s);
int call_builtin(char *command[]);
int name_exit(char *exit_stat);
int _strncmp(const char *s1, const char *s2, size_t n);
char *get_env(char *index);
int execute(void);
void free_pointers(char **s);
int main(int argc, char *argv[]);
void *_realloc(void *ptr, unsigned int old_memo, unsigned int new_memo);
void *_calloc(unsigned int n_memb, unsigned int size);
int prints(char *array[]);
int f_printf(int fd, const char *format, char *s1, int num, char *s2);
int printer(int fd, char *s);
int _putf(int fd, char c);
int _printin(int fd, int n);
int create_prompt();
size_t read_line(char **line);
char *run_shell(void);
char *_strcat(char *dest, char *src);
char *_strchr(char *str, char c);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(char *s);
char **she_strtok(char *str, char delim);
char *_strcpy(char *dest, char *src);

extern char **environ;
int status_t;
char *line;
char **command;
int shell_input;
char *hsh;


#endif /** SHELL_H **/
