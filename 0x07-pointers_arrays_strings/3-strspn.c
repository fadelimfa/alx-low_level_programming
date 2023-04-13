#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *_strspn - check the code.
 *@s: is
 *@accept: is
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t len = strspn(s, accept);
	return (unsigned int) len;
}
