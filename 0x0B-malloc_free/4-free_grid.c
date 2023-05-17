/*
* Write a function that frees a 2 dimensional grid previously created
* by your alloc_grid function. Note that we will compile with your
* alloc_grid.c file. Make sure it compiles.
*/
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
