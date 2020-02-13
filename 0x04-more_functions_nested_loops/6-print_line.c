#include "holberton.h"

/**
 * print_line - print line during n times.
 * @n: integer
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
