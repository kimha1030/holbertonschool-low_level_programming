#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of elements
 * @size: size of array.
 * @cmp: pointer to the function used for compare values
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	if (array != 0 && size != 0 && cmp != 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			if (cmp(array[x]) == 1)
			{
				return (x);
			}
		}
	}
	return (-1);
}
