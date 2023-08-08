#include <stdlib.h>

/**
 * free_grid - Free a 2d array of that was created by alloc_grid function
 * @grid: A pointer to the created 2d array
 * @height: The height of the array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
		free(grid[i]);

	free(grid);
}
