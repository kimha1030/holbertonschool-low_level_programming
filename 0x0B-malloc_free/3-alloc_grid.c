#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array of integers.
 * @width: integer.
 * @height: integer.
 * Return: n.
**/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = malloc(width * sizeof(int *));
	if (n == NULL)
	{
		return (NULL);
		free(n);
	}
	for (i = 0 ; i < width ; i++)
	{
		n[i] = malloc(height * sizeof(int *));
		if (n[i] == NULL)
		{
			return (NULL);
			free(n[i]);
		}
		for (j = 0 ; j < height ; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
