#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - reallocates a memory block using malloc and free.
 * @ptr: pointer
 * @old_size: size of ptr
 * @new_size: new size of memory block.
 * Return: s
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return NULL;
	}
	p = malloc(new_size * sizeof(int));
	p = ptr;

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	free (ptr);
	return (p);
}
