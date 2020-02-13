#include "holberton.h"

/**
 * print_square - print line during n times.
 * @size: integer
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= size)
		{
			int j = 1;

			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
