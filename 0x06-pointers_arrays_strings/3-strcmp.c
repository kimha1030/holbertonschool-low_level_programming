#include "holberton.h"
/**
 * *_strcmp - Compare two strings
 * @s1: pointer.
 * @s2: pointer
 * Return: dest
**/
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2 ; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*s1 - *s2);
}
