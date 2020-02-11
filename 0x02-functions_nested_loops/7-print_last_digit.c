#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit of a number
 * @n: integer
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
	n = n * -1;
	x = n % 10;
	_putchar('0' + x);
	return (x);
	}
	else
	{
	x = n % 10;
	_putchar('0' + x);
	return (x);
	}
}
