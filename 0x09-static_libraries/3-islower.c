#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - Prints if lowercase or not
 * @c: is the variable
 * Return: 0 or 1
 */
int _islower(int c)
{
	int i = islower(c);

	if (i > 0)
		return (1);
	else
		return (0);
}


