#include <stdlib.h>

/**
 * free_grid - free a grid
 * @grid: the grid
 * @height: dimension 2
 *
 */
void free_grid(int **grid, int height)
{
	int i, j;

	i = 0;
	j = 0;
	if (height < 1)
	{
		return ;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
