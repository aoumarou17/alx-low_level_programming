#include "main.h"
#include <stdio.h>

/**
 * _puts - function
 *
 * @str: a parameter of the function
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
