#include "main.h"
/**
 * print_alphabet_x10 - Printing alphabets
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int n = 10;

	while (n >= 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			++alpha;
		}
		--n;
		_putchar(10);
		alpha = 'a';
	}
}
