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
		if (str[i] == '\0')
		{
			putchar('\n');
			break;
		}
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
}
