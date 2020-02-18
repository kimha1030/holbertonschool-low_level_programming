#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_x10(void)
{
	int x;
	char letter;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
