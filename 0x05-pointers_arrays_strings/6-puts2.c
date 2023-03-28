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
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
