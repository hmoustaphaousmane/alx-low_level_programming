#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created by
 * the function alloc_grid
 *
 * @grid: a pointer to the memory to be freed
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
