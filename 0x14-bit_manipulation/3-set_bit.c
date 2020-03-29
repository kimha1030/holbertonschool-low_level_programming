#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned long int
 * @index: index or position
 * Return: 1 or -1 if there is an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
	}
	return (1);
}
