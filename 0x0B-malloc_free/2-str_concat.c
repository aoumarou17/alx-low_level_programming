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

	x = 0;
	while (s1[x] != '\0')
		x++;

	y = 0;
	while (s2[y] != '\0')
		y++;

	str1 = malloc(sizeof(char) * x + y + 1);
	if (str1 == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		str1[i] = s1[i];
		i++;
	}

	limit = 0;
	while (s2[limit] != '\0')
	{
		str1[i] = s2[limit];
		i++;
		limit++;
	}
	str1[i] = '\0';
	return (str1);

}
