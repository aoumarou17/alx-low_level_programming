#include "main.h"
/**
 * print_alphabet - function for printing lowercase alphabets
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		++alpha;
	}

	_putchar(10);
}
