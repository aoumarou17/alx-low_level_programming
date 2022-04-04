#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - function that frees a 2 dimentional grid
 *
 * @grid: multidimentional array
 * @height: the height of the array
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
