#include "main.h"

/**
 * puts_half - function
 *
 * @str: pointer of the parameter
 */
void puts_half(char *str)
{
	int len = 0;
	int len_1;

	while (str[len] != '\0')
		len++;
	len_1 = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	while (str[len_1] != '\0')
		_putchar(str[len_1++]);
	_putchar(10);
}
