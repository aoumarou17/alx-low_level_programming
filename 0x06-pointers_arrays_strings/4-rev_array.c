#include "main.h"

/**
 * reverse_array - function
 *
 *@a: array to be reversed
 *@n: elements number
 */
void reverse_array(int *a, int n)
{
	int x, y, alpha;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		alpha = a[x];
		a[x] = a[y];
		a[y--] = alpha;
	}
}
