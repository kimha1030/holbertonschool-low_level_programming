#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in array
 * @array: array of integers
 * @size: size of array
 * @value: value that should be found
 * Return: index of value searched or -1 if it doesn't exist
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, x, maximum = size - 1, minimum = 0, middle;

	if (array == NULL)
		return (-1);

	for (i = 0; minimum <= maximum; i++)
	{
		printf("Searching in array: ");
		for (x = minimum; x <= maximum; x++)
		{
			if (x != maximum)
				printf("%d, ", array[x]);
			else
				printf("%d\n", array[x]);
		}
		middle = (maximum + minimum) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			minimum = middle + 1;
		else
			maximum = middle - 1;
	}
	return (-1);
}
