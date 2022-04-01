#include <stdio.h>

/**
 * main - function that prints its name followed by a new line
 *
 *@argc: number of command line arguments
 *@argv: line that contains the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
