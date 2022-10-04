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

	if (width == 0 || height == 0)
	{
		return (0);
	}
	grid = malloc(sizeof(int) * width);
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
	}
	return (grid);
}
