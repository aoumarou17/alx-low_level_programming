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

	x = 0;
	while (*(str + x) != '\0')
	{
		x++;
	}

	str1 = malloc(sizeof(char) * x + 1);

	if (str1 == NULL)
		return (NULL);

	y = 0;
	while (str[y] != '\0')
	{
		str1[y] = str[y];
		y++;
	}

	str1[y] = '\0';
	return (str1);
}
