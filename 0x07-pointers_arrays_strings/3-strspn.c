#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string.
 * @accept: character.
 * Return: cont
**/
unsigned int _strspn(char *s, char *accept)
{
	int x, t, cont;

	for (x = 0 ; s[x] != ',' ; x++)
	{
		for (t = 0 ; accept[t] != '\0' ; t++)
		{
			if (s[X] == accept[t])
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
