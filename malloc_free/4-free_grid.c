#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: the address of the two dimensional grid
 *
 * Return: Nothing.
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
