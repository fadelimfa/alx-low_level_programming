#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strchr - check the code.
 *@s: is
 *@c: is
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

