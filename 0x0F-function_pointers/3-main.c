#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - call functions with arithmetic operations
 * @argc: number strings in argv
 * @argv: array of command-line argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{	int a, b, result;
	int *op;

	int *ca(int, int);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opr = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_function(argv[2]) == NULL || argv[1] == '\0' || argv[3] == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == '/' || argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ca = get_op_function(opr);
	result = ca(a, b);
	printf("%d\n", result);
}
