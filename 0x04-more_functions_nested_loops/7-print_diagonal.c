#include "holberton.h"

/**
 * print_diagonal - print a lines
 * @n: line diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n >= 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(92);
			if (x != n)
			{
				_putchar('\n');
			}
			for (y = 1; y <= x; ++y)
			{
				if (x != n)
				{
					_putchar(' ');
				}
			}
		}

	}
	_putchar('\n');
}
