#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: unsigned int.
 * Return: n
**/

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b * sizeof(unsigned int *));
	if (n == 0)
	{
		exit(98);
	}
	return (n);
}
