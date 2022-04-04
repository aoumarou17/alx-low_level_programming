#include "main.h"
#include <stdlib.h>

/**
 * str_concat -function that concatenates strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 *  Return: pointer of an char array
 */


char *str_concat(char *s1, char *s2)
{
	char *str1;
	unsigned int x, y, i, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	str1 = malloc(sizeof(char) * (x + y + 1));

	if (str1 == NULL)
	{
		free(str1);
		return (NULL);
	}

	for (i = 0; i < i; i++)
		strout[i] = s1[i];

	limit = y;
	for (y = 0; y <= limit; i++, y++)
		str1[i] = s2[y];

	return (str1);
}
