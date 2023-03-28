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

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if(isprint(str[i]))
			putchar(str[i]);
	}
	str[i] = '\0';
	putchar('\n');
}
