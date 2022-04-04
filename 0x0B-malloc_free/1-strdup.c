#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 *
 * @str: string
 *
 * Return: pointer of an arrayof characters
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	str1 = (char *)malloc(sizeof(char) * (x + 1));

	if (str1 == NULL)
		return (NULL);

	for (y = 0; y <= i; y++)
		str1[y] = str[y];

	return (str1);
}
