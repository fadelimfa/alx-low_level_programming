#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * factorial check the code.
 *@n: is
 * Return: .
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
