#include "holberton.h"
/**
 * is_prime_number - function prints 1 if the number is prime..
 * @n: integer.
 * Return: x.
**/
int is_prime_number(int n)
	
	int a;

	if ((a * a) % n == 0)
	{
		return (1);
	}
	else
	{
		is_prime_number(n);
	}
	return (0);
}
