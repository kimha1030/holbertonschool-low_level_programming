#include "holberton.h"

/**
* add - Function that prints two integers
*
* Return suma
*/
void print_to_98(int n)
{
	int i;
	
	for (i = n ; i <= 98 ; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	_putchar(n);
	for (i = n ; i >= 98 ; i--)                                                        {                                                                                          _putchar(i);                                                                       _putchar(',');
                _putchar(' ');                                                             }
        _putchar('\n');
}
