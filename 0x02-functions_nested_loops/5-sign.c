#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Prints if alphabet or not
 * @c: is the variable
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}else
	{
		_putchar('0');
		return (0);
	}
}

