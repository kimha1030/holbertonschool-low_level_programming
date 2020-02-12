#include "holberton.h"

/**
* print_to_98 - prints all natural numbers from n to 98
*
* Return: Always 0.
*/
void print_to_98(int n)
{
	int i; 

	if (n <= 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%i", n);
			printf(",");
			printf(" ");
			printf("\n");
		}
	}
	else if (n == 98)
	{
		printf("%i", i);
		printf("\n");
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%i", i);
                        printf(",");
                        printf(" ");
                        printf("\n");
		}
	}
}
