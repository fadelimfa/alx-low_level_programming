#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	last_digit = -last_digit;

	_putchar('last_digit'+9);

	return last_digit;

}

