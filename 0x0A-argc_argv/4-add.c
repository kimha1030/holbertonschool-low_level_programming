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
		for (i = 1 ; argv[i] != '\0' ; i++)
		{
			if (!isdigit(*(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				if (atoi(argv[i]) > 0)
				{
				sum = sum + atoi(argv[i]);
				}
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
