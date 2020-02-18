#include <stdio.h>
/**
 * _puts - Prints a string to stdout.
 * @str: character.
 * Return: Always 0.
**/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != (n - 1))
		{
		printf("%i, ", a[i]);
		}
		else
		{
		printf("%i", a[i]);
		}
	}
	printf("\n");
}
