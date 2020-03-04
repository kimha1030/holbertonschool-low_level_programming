#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: pointer
 * @height: string
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if ((grid != 0) || (height != 0))
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
