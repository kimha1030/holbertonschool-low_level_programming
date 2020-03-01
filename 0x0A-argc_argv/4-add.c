#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds positive numbers.
 * @argc: number strings in argv
 * @argv: array of command-line argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc >= 2)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!isdigit(*(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
