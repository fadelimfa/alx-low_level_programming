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

	if (*s == '\0'){
	return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);

}
