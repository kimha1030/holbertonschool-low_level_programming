#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: const char.
 * @n: const unsigned int
 * Return: void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *p;

	va_start(list, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL)
		{
			p = va_arg(list, char *);
			if (p == NULL)
				printf("(nil)");
			else
				printf("%s", p);
			if (i < (n - 1))
				printf("%s", separator);
		}
		else
		{
			p = va_arg(list, char *);
			if (p == NULL)
				printf("(nil)");
			else
				printf("%s", p);
		}
	}
		va_end(list);
		printf("\n");
}
