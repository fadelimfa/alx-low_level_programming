#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *@c: is
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
