#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - print lenght string.
 * @s: string..
 * Return: cont
**/
int _strlen(char *s)
{
	char aux;
	int cont = 0;

	aux = s[0];
	while (aux != '\0')
	{
		cont++;
		aux = s[cont];
	}
	return (cont);
}
