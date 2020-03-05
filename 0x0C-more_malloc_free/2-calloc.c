#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: unsigned int.
 * @size: unsigned int.
 * @p: pointer.
 * @s: pointer.
 * Return: s
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, space;
	void *p;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = nmemb * size;
	p = malloc(space);
	s = p;
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < space ; i++)
		{
			s[i] = '\0';
		}
	}
	return (s);
}
