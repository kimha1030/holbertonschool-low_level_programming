#include "holberton.h"

/**
 * print_alphabet - This function allows print the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
	_putchar(let);
	}
	_putchar('\n');
}
