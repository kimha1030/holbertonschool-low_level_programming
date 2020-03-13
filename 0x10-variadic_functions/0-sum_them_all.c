#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all parameters.
 * @n: parameter.
 * Return: int
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0 ; i < n ; i++)
			sum = sum + va_arg(list, const unsigned int);
	}
	va_end(list);
	return (sum);
}
