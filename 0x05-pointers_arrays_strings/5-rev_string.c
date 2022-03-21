#include "main.h"
/**
 * rev_string - function
 *
 * @s: pointer of the parameter
 */
void rev_string(char *s)
{
	char you;
	int len = 0;
	int a = 0;
	int k;

	while (s[len] != '\0')
		len++;
	k = len - 1;
	len /= 2;

	while (len--)
	{
		you = s[a];
		s[a] = s[k];
		s[k] = you;
		a++;
		k--;
	}
}
