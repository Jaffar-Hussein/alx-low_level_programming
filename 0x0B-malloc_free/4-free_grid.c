#include <stdlib.h>

/**
 * free_grid - frees a grid
 *
 * **grid - Pointer to the grid
 * 
 * @height - height of the grid
 */

void free_grid(int **grid, int height)
{
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
