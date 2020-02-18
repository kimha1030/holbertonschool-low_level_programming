#include "holberton.h"

/**
 * _strlen - Function that shows the lenght of word.
 * @s: character.
 * return: value of @cont
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
