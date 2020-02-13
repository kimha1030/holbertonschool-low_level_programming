#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
	long i, a = 0, b = 1, c = 1;

	for (i = 1 ; i <= 50 ; i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (i == 50)
		{
			printf("%ld\n", c);
		}
		else
		{
			printf("%ld, ", c);
		}
	}
	return (0);
}
