#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly space in memory.
 * @str: array
 * Return: str
**/

char *_strdup(char *str)
{
	int x = 0;
	int y = 0;

	char *n;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[x] != '\0')
		{
			x++;
		}
		n = malloc(sizeof(char) * (x + 1));
		if (n == NULL)
		{
			return (NULL);
		}
		else
		{
			while (str[y] != '\0')
			{
				n[y] = str[y];
				y++;
			}
			return (n);

		}
	}
}
