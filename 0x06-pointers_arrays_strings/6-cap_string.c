#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - check the code.
 *@s: is
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
            str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
            str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
            str[i - 1] == '{' || str[i - 1] == '}')
        {
            str[i] = toupper(str[i]);
        }
    }

    return str;

}
