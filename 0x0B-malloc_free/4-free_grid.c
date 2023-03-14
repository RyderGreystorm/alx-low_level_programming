#include "main.h"

/**
 *free_grid  - frees the memories allocated
 *@grid: pointer to a pointer
 *@height: metrix index
 *return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
