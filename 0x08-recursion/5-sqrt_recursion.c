#include "holberton.h"
/**
 * root - print character
 * @m: integer
 * @i: integer
 * Return: int
 */
int root(int m, int i)
{
	if ((i * i) > m)
	{
		return (-1);
	}
	else if ((i * i) == m)
	{
		return (i);
	}
	else
	{
		return (root(m, (i + 1)));
	}
}

/**
 * _sqrt_recursion - returns the natural square root.
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int result = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (root(n, result));
	}
}
