#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strncat - check the code.
 *@dest: is
 *@src: is
 *@n: is
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	strncat(dest + dest_len, src, n);
	return (dest);

}
