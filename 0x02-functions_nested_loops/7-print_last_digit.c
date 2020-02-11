#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @r: integer
 * Return: r
 */
int print_last_digit(int r)
{
	if (r >= 0)
	{
	r = r % 10;
	_putchar(r + '0');
	return (r);
	}
	else
	{
	r = r * -1;
	r = r % 10;
	_putchar(r + '0');
	return (r);
	}
}
