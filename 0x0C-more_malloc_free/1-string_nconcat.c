#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string.
 * @s2: string.
 * @n: unsigned int.
 * Return: p
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z, t;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (n >= y)
		n = y;
	p = malloc(sizeof(char) * ((x + y) + 1));
	if (p == NULL)
		return (NULL);
	for (z = 0 ; s1[z] != '\0' ; z++)
		p[z] = s1[z];
	for (t = 0 ; t < n && s2[t] != '\0' ; t++)
	{
		p[z] = s2[t];
		z++;
	}
	p[x + y] = '\0';
	return (p);
}
