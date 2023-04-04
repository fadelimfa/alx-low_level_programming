#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * print_line - check the code.
 *@n: is
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;

		if (n <= 0)
		{
			putchar('\n');
		}
		else
		{
			while (i <= n)
			{
				putchar('_');
				i++;
			}
	}
}
