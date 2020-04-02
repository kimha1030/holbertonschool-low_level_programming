#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, a = 0, b = 3, c = 3;

	printf("1, 2, ");
	for (i = 1 ; i <= 98 ; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 98)
		{
			printf("%lu\n", c);
		}
		else
		{
			printf("%lu, ", c);
		}
	}
	return (0);
}
