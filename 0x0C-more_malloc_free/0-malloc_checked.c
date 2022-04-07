#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory.
 *
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *alpha;

	alpha = malloc(b);
	if (alpha == NULL)
		exit(98);
	return (alpha);
}
