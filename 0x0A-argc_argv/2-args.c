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
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
