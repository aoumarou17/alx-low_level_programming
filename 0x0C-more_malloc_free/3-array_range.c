#include "main.h"
#include <stdlib.h>

/**
 * array_range - funcion that creates arrays
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: returns NULL or an  array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
