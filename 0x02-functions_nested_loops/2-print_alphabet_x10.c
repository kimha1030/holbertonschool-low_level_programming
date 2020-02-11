#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int let, i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (let = 'a' ; let <= 'z' ; let++)
		{
		_putchar(let);
		}
	_putchar('\n');
	}
}
