#include <stdio.h>
#include <stdlib.h>
/**
 *_isdigit - function that return 1 or 0 depends is number
 * @x: digit
 * Return: digit
 */

int _isdigit(char *x)
{
	while (*x != '\0')
	{
		if (*x < 0 || *x > '9')
		{
			return (0);
		}
		x++;
	}
	return (1);
}

/**
 * main - function that adds 2 numbers
 * @argc: The number of command line arguments
 * @argv: Array that contain the command line arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (x = 1; x < argc ; x++)
	{
		if (_isdigit(argv[x]))
		{
			sum += atoi(argv[x]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
