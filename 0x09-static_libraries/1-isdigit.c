#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check the code.
 *@c: is
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int a = isdigit(c);

	if (a > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
