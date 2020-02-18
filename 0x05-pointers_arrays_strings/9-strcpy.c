#include "holberton.h"
/**
 * _strcpy - Copy array in other array.
 * @dest: array end.
 * @src: aray init.
 * Return: dest
**/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
