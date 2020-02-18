#include "holberton.h"
/**
 * puts2 - Prints a string to stdout.
 * @str: character.
 * Return: Always 0.
**/
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i =  i + 2;
	}
	_putchar('\n');
}
