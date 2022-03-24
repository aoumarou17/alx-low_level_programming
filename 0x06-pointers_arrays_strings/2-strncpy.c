#include "main.h"

/**
 * *_strncpy - function
 *
 * @dest: destination string
 * @src: starting string
 * @n: the number of bytes
 *
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	for (x = 0; x < n && src[x] != 0; x++)
		dest[x] = src[x];
	while (x < n)
	{
		dest[x] = 0;
		x++;
	}
	return (dest)
}
