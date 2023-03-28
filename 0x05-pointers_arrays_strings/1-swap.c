#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * swap_int - check the code.
 *@a: is
 *@b: is
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
