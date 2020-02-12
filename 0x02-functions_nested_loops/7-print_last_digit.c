#include "holberton.h"

/**
 *print_last_digit - print last digit
 *@n: the integer print
 *Return: n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
	n = n * -1;
	}
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
