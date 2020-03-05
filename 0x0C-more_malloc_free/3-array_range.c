#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - function that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: s
**/

int *array_range(int min, int max)
{
	int i, lenght;
	int *p;

	if (min > max)
		return (NULL);
	lenght = max - min + 1;
	p = malloc(sizeof(int) * lenght);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < lenght ; i++)
		{
			p[i] = min;
			min++;
		}
	}
	return (p);
}
