#include "main.h"

/**
 * *_strcat - function
 *
 * @dest: pointer of the parameter
 * @src: pointer of the parameter
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
