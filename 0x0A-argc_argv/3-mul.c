#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name.
 * @argc: number strings in argv
 * @argv: array of command-line argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mult = 0;
	int A, B;

	if (argc == 3)
	{
		A = atoi(argv[1]);
		B = atoi(argv[2]);
		mult = A * B;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
