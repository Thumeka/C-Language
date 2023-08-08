#include "shell.h"

/**
* _calloc - de-allocate
* @n_memb: elements
* @size: byte
* Return: pointer
*/
void *_calloc(unsigned int n_memb, unsigned int size)
{
	unsigned int j;
	void *alloc;

	if (n_memb == 0 || size == 0)
		return (NULL);
	alloc = malloc(n_memb * size);
	if (!alloc)
		return (NULL);
	for (j = 0; j < (n_memb * size); j++)
		((char *) (alloc))[j] = 0;
	return (alloc);
}
#include "shell.h"

/**
* _realloc - reallocate memory
* @ptr: pointer
* @old_memo: old memory
* @new_memo: new memory
* Return: void
*/
void *_realloc(void *ptr, unsigned int old_memo, unsigned int new_memo)
{
	void *pointer;
	char *pc, *fill;
	unsigned int input;

	if (new_memo == old_memo)
		return (ptr);
	if (ptr == NULL)
	{
		pointer = malloc(new_memo);
		if (pointer == NULL)
			return (NULL);
	}
	pc = ptr;
	pointer = malloc(sizeof(*pc) * new_memo);
	if (pointer == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fill = pointer;
	for (input = 0; input < old_memo && input < new_memo; input++)
		fill[input] = *pc++;
	free(ptr);
	return (pointer);
}
