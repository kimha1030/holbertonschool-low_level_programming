#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in array
 * @array: array of integers
 * @size: size of array
 * @value: value that should be found
 * Return: index of value searched or -1 if it doesn't exist
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
