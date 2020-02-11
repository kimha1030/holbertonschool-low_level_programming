#include "holberton.h"

/**
 * main - This function prints the word Holberton.
 *
 * Return: 0.
 */
int main(void)
{
	char s[] = "Holberton";
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
