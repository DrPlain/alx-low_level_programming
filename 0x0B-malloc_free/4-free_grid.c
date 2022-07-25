#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid previously created
 *
 * @grid: pointer to a pointer
 *
 * @height: height of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
