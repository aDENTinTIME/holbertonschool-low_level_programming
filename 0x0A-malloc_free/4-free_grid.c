#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array.
 *
 * @grid: Array.
 */

void free_grid(int **grid, int height)
{
	int i = 0;
	(void) height;
// Not working
	if (grid == NULL)
		return;
	while (grid[i] != NULL)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
