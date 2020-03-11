#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array of elements
 * @size: size of array.
 * @action: pointer to function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;
	
	for (x = 0 ; x < size ; x++)
	{
		if (array[x] != '\0')
		(*action)(array[x]);
	}
}
