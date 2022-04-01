#include "main.h"

/**
 * main - function that prints all arguments received
 *
 *@argc: number of command line
 *@argv: array that contains the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
