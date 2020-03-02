#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - function that search only digit.
 * @x: integer.
 * Return: digit
 **/

int _isdigit(char *x)
{
	while (*x != '\0')
	{
		if (*x < 0 || *x > 9)
		{
			return (1);
		}
		x++;
	}
	return (0);
}

/**
 * main - function that adds positive numbers.
 * @argc: number strings in argv
 * @argv: array of command-line argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc ; x++)
		{
			if (!_isdigit(argv[x]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[x]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
