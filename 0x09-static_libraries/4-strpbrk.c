#include "holberton.h"

/**
 * *_strpbrk - function that locates a character in a string.
 * @s: string.
 * @accept: string.
 * Return: s
**/
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0 ; accept[y] ; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
