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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int i = num1 * num2;

		printf("%d\n", i);
		return (0);
	}
}
