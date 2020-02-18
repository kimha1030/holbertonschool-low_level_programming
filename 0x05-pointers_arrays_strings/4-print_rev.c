#include "holberton.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: character.
 * Return: Always 0.
**/
void print_rev(char *s)
{
	char aux;
	int i, h, cont = 0;

	aux = s[0];
	for (i = 0 ; aux != '\0' ; i++)
	{
		aux = s[i];
		cont++;
	}
	for (h = cont - 2 ; h >= 0 ; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
