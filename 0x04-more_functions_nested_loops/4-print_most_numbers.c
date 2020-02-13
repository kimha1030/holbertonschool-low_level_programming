#include "holberton.h"

/**
 * print_most_numbers - this function print numbers from 0 to 9, without 2 and 4..
 * @c: char.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		if (!(c == 50 || c == 52))
		{
		_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
