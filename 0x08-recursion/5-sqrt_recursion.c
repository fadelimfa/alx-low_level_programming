#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _sqrt_recursion- check the code.
 *@n: is
 * Return: .
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	for (i = 1; i * i <= n; i++)
	;

	i--;

	if (i * i == n)
		return (i);
	return (-1);
}
