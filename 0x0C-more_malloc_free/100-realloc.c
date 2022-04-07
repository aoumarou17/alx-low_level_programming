#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory in block
 *
 * @ptr: pointer to the memory
 * @old_size: bytes size of allocated ptr memory
 * @new_size: size of the memory in block
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);


	return (ptr);
}
