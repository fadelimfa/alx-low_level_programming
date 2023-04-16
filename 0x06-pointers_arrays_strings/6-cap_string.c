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

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
            s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' ||
            s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
            s[i - 1] == '{' || s[i - 1] == '}')
        {
            s[i] = toupper(s[i]);
        }
    }

    return s;
}
