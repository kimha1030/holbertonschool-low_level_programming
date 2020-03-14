#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: const char pointer
 * Return: void
 **/

void print_all(const char * const format, ...)
{
	va_list list;
	char *s;
	int j = 0, k = 1;

	va_start(list, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				else
				{
					printf("%s", s);
					break;
				}
			default:
				k = 0;
		}
		if (format[j + 1] != 0 && k)
			printf(", ");
		j++;
		k++;
	}
	va_end(list);
	printf("\n");
}
