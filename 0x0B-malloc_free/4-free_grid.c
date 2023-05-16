#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory allocation  2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}

