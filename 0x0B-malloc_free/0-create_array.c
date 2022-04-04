#include "main.h"
#include <stdio.h>

/**
 * create_array - function that creats an array of char
 *
 * @size: array size
 * @c: store char
 *
 * Return: pointer of the array
 */
char *create_array(unsigned int size, char c)
{
	char *omega;
	unsigned int i;

	if (size == 0)
		return (NULL);

	omega = malloc(sizeof(c) * size);

	if (omega == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		omega[i] = c;

	return (omega);
}
