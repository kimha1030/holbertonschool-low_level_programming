#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int or_ex;

	or_ex = n ^ m;
	while (or_ex)
	{
		i = i + (or_ex & 1);
		or_ex = or_ex >> 1;
	}
	return (i);
}
