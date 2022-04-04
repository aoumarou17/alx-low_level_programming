#include "main.h"
#include <stdio.h>

/**
 * _strlen - function
 * @s: the parameter of the function
 * Return: return the value of i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
