#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strncpy - check the code.
 *@dest: is
 *@src: is
 *@n: is
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);

}
