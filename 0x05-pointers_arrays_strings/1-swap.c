#include "main.h"

/**
 * swap_int - function
 *
 *@a: int parameter
 *@b: int parameter
 */
void swap_int(int *a, int *b)
{
	int omega;

	omega = (*a);
	(*a) = (*b);
	(*b) = omega;
}
