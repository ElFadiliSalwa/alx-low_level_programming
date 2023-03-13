#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid previously created
 * @height: the height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	if (!grid && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
