#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the addition of two positive numbers
 *
 *@argc: the number of command line
 *@argv: array contaning the program
 *
 * Return: the sum value
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0;


	for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
		return (0);
}
