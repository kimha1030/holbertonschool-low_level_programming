#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number strings in argv
 * @argv: array of command-line argument.
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
