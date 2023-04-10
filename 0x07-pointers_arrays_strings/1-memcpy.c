#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *_memcpy - check the code.
 *@dest: is
 *@src: is
 *@n: is
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
