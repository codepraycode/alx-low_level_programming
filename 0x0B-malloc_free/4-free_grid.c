#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional array
 * @grid: the two dimensional array
 * @height: number of rows
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
