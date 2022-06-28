#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a previously created 2 dimensional grid
 * @grid: grid being freed
 * @height: height(size) of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL || height != 0)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
