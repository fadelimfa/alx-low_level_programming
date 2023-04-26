#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code.
 *@b: is
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
