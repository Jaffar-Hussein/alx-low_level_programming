#include <stdlib.h>

/**
 * **alloc_grid - Pointer to two dimensional array
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on failure or pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width == 0 || height == 0)
	{
		return (0);
	}
	grid = malloc(sizeof(int) * width);
	if (grid == 0)
	{	
		free(grid);
		return(0);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == 0)
		{
			free(grid[i]);
			free(grid);
			return (0);
		}
		grid[i] = 0;
	}
	return (grid);
}
