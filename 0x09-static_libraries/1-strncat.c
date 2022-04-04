#include "main.h"

/**
 * *_strncat - function
 *
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes
 *
 * Return: return the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = 0;
	return (dest);
}
