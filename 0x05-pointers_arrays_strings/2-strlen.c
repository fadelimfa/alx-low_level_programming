#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _strlen - check the code.
 *@s: is
 * Return: Always 0.
 */
int _strlen(char *s)
{
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
