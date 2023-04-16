#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - check the code.
 *@s: is
 * Return: Always 0.
 */
char *leet(char *)
{
	    char *letters = "aAeEoOtTlL";
    char *numbers = "4433007711";
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (s[i] == letters[j])
            {
                s[i] = numbers[j];
                break;
            }
        }
    }

    return s;
}
