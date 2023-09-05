#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: parameter1
 * @height: parameter2
 *
 * Return: return NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, l;

	grid = malloc(height * sizeof(*grid));

	if (width <= 0 || height <= 0 || grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (l = 0; l < width; l++)
		{
			grid[i][l] = 0;
		}
	}
	return (grid);
}
