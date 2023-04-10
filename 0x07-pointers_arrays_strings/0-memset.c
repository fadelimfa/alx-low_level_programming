#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *_memset - check the code.
 *@s: is
 *@b: is
 *@n: is
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for ( i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
