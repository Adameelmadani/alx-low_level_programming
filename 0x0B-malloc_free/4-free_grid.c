#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - free grid file
  * @grid: int
  * @height: int
  */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
