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

	if (array != 0 && size != 0 && action != 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			(*action)(array[x]);
		}
	}
}
