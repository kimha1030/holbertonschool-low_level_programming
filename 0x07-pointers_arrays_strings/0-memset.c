#include "holberton.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: string
 * @b: byte for fill the area
 * @n: size of area
 * Return: s.
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		s[x] = b;
	}
	return (s);
}
