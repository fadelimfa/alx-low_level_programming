#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _puts - check the code.
 *@str: is
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *rev = strrev(strdup(s));
	printf("%s\n", rev);
}
