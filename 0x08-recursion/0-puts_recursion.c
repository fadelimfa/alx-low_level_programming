#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _puts_recursion - check the code.
 *@s: is
 * Return: .
 */
void _puts_recursion(char *s)
{
	if(s[0] == '\0')
		putchar('\n');
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
