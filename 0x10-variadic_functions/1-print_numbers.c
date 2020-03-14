#include "variadic_functions.h"

/**
 * print_numbers - unction that prints numbers, followed by a new line
 * @separator: const char.
 * @n: const unsigned int
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 1;

	va_start(list, n);
	while (i <= n)
	{
		if (!(separator == NULL))
		{
			printf("%d", va_arg(list, const unsigned int));
			if (i < n)
				printf("%s", separator);
		}
		if (separator == NULL)
		{
			printf("%d", va_arg(list, const unsigned int));
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
