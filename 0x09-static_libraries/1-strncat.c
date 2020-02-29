#include "holberton.h"
/**
 * *_strncat - Copy string at the end of other string
 * @dest: array end.
 * @src: aray init.
 * @n: size array 2.
 * Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (k = 0 ; k < n && src[k] != '\0' ; k++)
	{
		dest[i] = src[k];
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
