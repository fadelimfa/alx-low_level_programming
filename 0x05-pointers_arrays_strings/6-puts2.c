#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * puts2 - check the code.
 *@str: is
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str <= 0)
		{
			putchar('\n');
			break;
		}
		else
		{
			while (i <= str)
			{
				putchar('_');
				i++;
			}
	}
	}
}
