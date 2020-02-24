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

	for (x = 0 ; *s != ',' ; x++)
	{
		for (t = 0 ; *accept != '\0' ; t++)
		{
			if (*accept == *s)
			{
				cont++;
				break;
			}
		}
		if (*accept != *s)
		{
			break;
		}
	}
	return (cont);
}
