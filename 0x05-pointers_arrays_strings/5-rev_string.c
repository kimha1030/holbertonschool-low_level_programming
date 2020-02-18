#include "holberton.h"
/**
 * rev_string - Prints a string in reverse.
 * @s: character.
 * Return: Always 0.
**/
void rev_string(char *s)
{
	char aux;
	int i, h, cont = 0;

	aux = s[0];
	_putchar(aux);
/**:
	for (i = 0 ; aux != '\0' ; i++)
	{
		cont++;
		_putchar(cont);
	}

	for (h = aux - 1 ; h <= 0 ; h--)
	{
		cont--;
		s[0] = s[cont];
	}
**/
}
