#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _root - Compute square root of a number
 *
 * @n: Number to compute square root of
 * @i: Starting point for square root computation
 *
 * Return: Square root of n if found, -1 if not found
 */
int _root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_root(n, i + 1));
}


/**
 * _sqrt_recursion - Compute square root of a number recursively
 *
 * @n: Number to compute square root of
 *
 * Return: Square root of n if found, -1 if not found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_root(n, 0));
}
