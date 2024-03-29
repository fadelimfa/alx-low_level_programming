#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 *      s2 can contain the special character
 *           * which can replace any string (including an empty string).
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

	if (*s1 == '\0')
		return (wildcmp(s1, s2 + 1));

	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

