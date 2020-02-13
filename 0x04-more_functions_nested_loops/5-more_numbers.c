#include "holberton.h"

/**
 * print_most_numbers - this function print numbers from 0 to 9, without 2 and 4..
 * @c: char.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
	{
		i++;

		j = 0;
		while (j <=14)
		{
			j++;
			_putchar('0' + j);:
		}
	_putchar('\n');
	}
}
