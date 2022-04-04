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


	omega = malloc(sizeof(c) * size);

	if (size == 0 || omega == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		omega[i] = c;
	}
	return (omega);
}
