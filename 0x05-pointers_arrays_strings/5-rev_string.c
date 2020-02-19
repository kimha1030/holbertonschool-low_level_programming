#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string.
 * @s: string.
 * Return: void.
 */

void rev_string(char *s)
{
	char aux[1000];
	int c, x, y = 0, z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		aux[x] = s[x];
		y++;
	}
	for (c = y - 1; c >= 0; c--)
	{
		s[c] = aux[z];
		z++;
	}
}
