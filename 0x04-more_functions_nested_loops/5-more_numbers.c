#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_most_numbers - check the code.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		int n;
		for (n = 0; n <= 14; n++)
			_putchar((n % 10) + '0');
			_putchar('\n');
	}
	_putchar('\n');
}
