#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *string_toupper - check the code.
 *@s: is
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);

}
