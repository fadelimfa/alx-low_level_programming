#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_most_numbers - check the code.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n = 2)
			break;
		else if (n = 4)
			break;
		else
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
