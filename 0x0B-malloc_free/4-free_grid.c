#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Function that frees a 2 dimensional grid previously
* created by your alloc_grid function
* @grid: 2 dimentional grid
* @height: height dimension of grid
* Description: frees memory of grid
* Return: 0
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
