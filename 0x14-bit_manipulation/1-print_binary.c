#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	char ch;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 0; n > 0; i++)
	{
		if ((n & 1) == 0)
		{
			ch = '0';
			_putchar(ch);
		}
		else
		{
			ch = '1';
			_putchar(ch);
		}
		n = n >> 1;
	}
}
