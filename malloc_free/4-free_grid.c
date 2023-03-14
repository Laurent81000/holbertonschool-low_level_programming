#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free A 2D grid 
 * @grid: adress of the two dimensional grid
 * @height: height of array
 *
 * Return: Nothing
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
