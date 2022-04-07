#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for arrays
 *
 * @nmemb: number of elements
 * @size: length of bytes
 *
 * Return: pointer to the chosen memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alpha;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alpha = malloc(nmemb * size);

	if (alpha == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		alpha[i] = 0;

	return (alpha);
}
