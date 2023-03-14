#include "main.h"

/**
 * free_grid - frees 2D array
 * @grid: the 2D array pointer
 * @height: number of array in grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
