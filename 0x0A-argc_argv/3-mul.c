#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two number
 *
 *@argc: the number of command line
 *@argv: array that contains the program
 *
 * Return: 0 for sucess and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
		printf("Error\n");
		return (1);
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
