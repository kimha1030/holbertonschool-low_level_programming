#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string.
 * @s2: string.
 * Return: n
**/

char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z, t;

	char *n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	n = malloc(sizeof(char) * ((x + y) + 1));
	if (n == NULL)
		return (NULL);
	for (z = 0 ; s1[z] != '\0' ; z++)
		n[z] = s1[z];
	for (t = 0 ; s2[t] != '\0' ; t++)
	{
		n[z] = s2[t];
		z++;
	}
	n[x + y] = '\0';
	return (n);
}
