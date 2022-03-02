#include "main.h"
#include <stdlib.h>

/**
 * free_grid - The function that free a 2 dimensional with
 * function "alloc_grid"
 * @grid: desc
 * @height: desc
 * Return: desc
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
	}
	free(grid);
}
