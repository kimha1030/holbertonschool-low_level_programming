#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string.
 * @accept: character.
 * Return: s
**/
unsigned int _strspn(char *s, char *accept)
{
	int x, t, cont;

	for (x = 0 ; s[x] != ',' ; x++)
	{
		for (t = 0 ; accept[t] != '\0' ; t++)
		{
			if (accept[t] == s[x])
			{
				cont++;
				break;
			}
		}
		if (accept[t] != s[x])
		{
			break;
		}
	}
	return (cont);
}
