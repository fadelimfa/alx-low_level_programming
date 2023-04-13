#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Prints if alphabet or not
 * @c: is the variable
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
		return (1);
	else
		return (0);
}


