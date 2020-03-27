#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int
 * Return: value or -1 if there is an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value = 0;

	if (index > n)
	{
		return (-1);
	}
	else
	{
		value = (n >> index) & 1;
		return (value);
	}
}
