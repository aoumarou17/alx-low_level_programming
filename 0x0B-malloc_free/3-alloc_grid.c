#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns to a two dimensional array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid1;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	grid1 = malloc(height * sizeof(int *));
	if (grid1 == NULL)
	{
		free(grid1);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid1[x] = malloc(width * sizeof(int));
		if (grid1[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grid1[x]);
			free(grid1);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			grid1[x][y] = 0;

	return (grid1);
}
