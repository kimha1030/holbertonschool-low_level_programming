#include "holberton.h"
/**
 * puts_half - Prints half of a string.
 * @str: string
 * Return: void.
**/
void puts_half(char *str)
{
	char aux;
	int i, n, cont = 0;

	aux = str[0];
	while (aux != '\0')
	{
		cont++;
		aux = str[cont];
	}
	if (!(cont % 2 == 0))
	{
		n = (cont - 1) / 2;
		n = n + 1;
	}
	else
	{
		n = cont / 2;
	}

	for (i = n; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
