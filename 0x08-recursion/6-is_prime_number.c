#include "holberton.h"
/**
 * prime - define number
 * @n: integer.
 * @i: integer.
 * Return: int.
**/

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, (i - 1)));
	}
}

/**
 * is_prime_number - function prints 1 if the number is prime.
 * @n: integer.
 * Return: int.
**/

int is_prime_number(int n)
{
	int result;

	result = prime(n, n / 2);
	if (result == 1)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (0);
}
