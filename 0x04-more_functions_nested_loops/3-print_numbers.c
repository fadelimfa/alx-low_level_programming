#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_numbers - check the code.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');

	_putchar('\n');
}
