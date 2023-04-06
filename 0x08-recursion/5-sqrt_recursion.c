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
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	
	int i = 1;

	while (i * i < n)
		i++;

	if (i * i == n)
		return (i);
	else
		return (-1);
}
