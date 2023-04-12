#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previous
 * created by your alloc_grid function.
 * @grid: int
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
