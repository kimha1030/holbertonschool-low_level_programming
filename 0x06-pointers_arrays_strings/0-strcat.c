#include "holberton.h"
/**
 * *_strcat - Copy string at the end of other string
 * @dest: array end.
 * @src: aray init.
 * Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (k = 0 ; src[k] != '\0' ; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
