#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * print_rev - check the code.
 *@s: is
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
