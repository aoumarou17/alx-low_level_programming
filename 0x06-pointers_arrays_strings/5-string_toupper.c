#include "main.h"

/**
 * *string_toupper - function
 *
 * @s: string to be modify
 *
 * Return: return a string
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a))
	{
		if ((*(s + a) >= 97) &&  (*(s + a) <= 122))
			*(s + a) = *(s + a) - 32;
		a++;
	}
	return (s);
}
