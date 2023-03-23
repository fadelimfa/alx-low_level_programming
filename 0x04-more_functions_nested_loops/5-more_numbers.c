#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * more_numbers - check the code.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, n;
	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (i > 9)
				_putchar((n / 10) + '0');
			_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
