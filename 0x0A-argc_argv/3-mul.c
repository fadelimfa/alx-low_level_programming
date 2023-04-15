#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for the program
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = (*argv[1] - '0') * (*argv[2] - '0');

		printf("%d\n", i);
		return (0);
	}
}
