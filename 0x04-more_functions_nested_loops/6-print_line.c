#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_line - check the code.
 * @n: is
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('/n');
	}
	else
	{
		for (int i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('/n');

}
