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
	int j = 0;
	int k = 1;
	char c;

	va_start(list, format);
	while (format[j])
	{
		switch(format[j])
		{
			case 'c':
				c = va_arg(list, int);
				printf("%c", c);
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
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				k = 0;
				break;
		}
	j++;
	}
	if (format[j + 1] != 0 && k)
		printf(", ");
	va_end(list);                                                                      printf("\n"); 
}
