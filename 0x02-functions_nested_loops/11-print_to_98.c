#include "holberton.h"

/**
* print_to_98 - prints all natural numbers from n to 98
*
* Return: Always 0.
*/
void print_to_98(int n)
{
	int i; 
	char max;

	if (n <= '0')
	{
		for (i = n ; i <= '98' ; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
	else if (n == max)
	{
		_putchar(i);
		_putchar('\n');
	}
	else
	{
		for (i = n ; i >= '98' ; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
