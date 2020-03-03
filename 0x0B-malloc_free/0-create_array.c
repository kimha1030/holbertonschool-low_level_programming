#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: unsigned integer
 * @c: char
 * Return: s.
**/

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *n;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		n = malloc(size * sizeof(c));
		if (n == 0)
		{
			return (0);
		}
		else
		{
			for (x = 0 ; x < size ; x++)
			{
				n[x] = c;
			}
			return (n);
		}
	}
}
