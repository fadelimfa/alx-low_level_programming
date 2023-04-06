#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _sqrt_recursion- check the code.
 *@n: is
 * Return: .
 */

int root(int n, int i)
{
	if (i * i == n)
		return i;
	else if (i * i > n)
		return -1;
	else
	return root(n, i+1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else
		return root(n, 0);
}
