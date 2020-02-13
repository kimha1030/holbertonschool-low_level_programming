#include "holberton.h"

/**
 * print_numbers - this function print numbers from 0 to 9.
 * Return: Always 0.
 */
void print_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
