#include "holberton.h"
/**
 * swap_int - Function swaps 2 integers
 * @a: integer.
 * @b: integer.
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int aux = 0;

	aux = *a;
	*a = *b;
	*b = aux;
}
