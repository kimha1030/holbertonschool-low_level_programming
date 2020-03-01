#include "holberton.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: memory area destination
 * @src: memory area source
 * @n: size of area
 * Return: s
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
