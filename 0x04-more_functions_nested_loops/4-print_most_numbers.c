#include "holberton.h"

/**
 * print_most_numbers - this function print numbers from 0 to 9, without 2 and 4..
 * @c: char.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
		_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
