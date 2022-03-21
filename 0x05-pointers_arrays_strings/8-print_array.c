#include "main.h"

/**
 * print_array - function
 *
 * @a: pointer of the parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int k = 0;

	if (n > 0)
	{
		while (k < n - 1)
			printf("%d, ", a[i++]);
		printf("%d\n", a[k]);
	}
	else
		printf("\n");
}
