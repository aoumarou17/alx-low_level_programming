#include "main.h"
#include <stdlib>

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

	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
