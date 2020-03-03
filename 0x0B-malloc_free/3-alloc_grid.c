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
	int i, j, l
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = malloc(width * sizeof(int *));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < width ; i++)
	{
		n[i] = malloc(height * sizeof(int *));
		if (n[i] == NULL)
		{
			for (j = 0 ; j < width ; j++)
			{
				free(n[j]);
			}
			free(n);
			return (NULL);
		}
		for (l = 0 ; l < height ; l++)
		{
			n[i][l] = 0;
		}
	}
	return (n);
}
