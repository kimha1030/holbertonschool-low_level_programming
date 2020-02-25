#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix..
 * @a: name of matrix.
 * @size: size of matrix.
 * Return: void.
**/
void print_diagsums(int *a, int size)
{
	int x, y;
	int suma1 = 0;
	int suma2 = 0;

	for (x = 0 ; x < size ; x++)
	{
		suma1 = suma1 + (a + x * size)[x];
	}
	for (y = 0 ; y < size ; y++)
	{
		suma2 = suma2 + (a + y * size)[--x];
	}
	printf("%d, %d\n", suma1, suma2);
}
