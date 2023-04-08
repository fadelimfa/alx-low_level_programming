#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * puts_half - check the code.
 *@str: is
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, len = strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}
	for (; i < len; i++)
		putchar(str[i]);
	putchar('\n');
}
