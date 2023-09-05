#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a two grid.
 * @grid: parameter1
 * @height: parameter2
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
