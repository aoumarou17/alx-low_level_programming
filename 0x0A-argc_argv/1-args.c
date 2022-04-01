#include "main.h"

/**
 * main - function that prints the number of arguments
 *
 *@argc: number of command line arguments
 *@argv: array that contains the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
