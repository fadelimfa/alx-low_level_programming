#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * reset_to_98 - check the code.
 *@n: is
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int *p;
	p=&n;
	*p=98;
}
