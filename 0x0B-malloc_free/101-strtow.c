#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words = NULL;
    int i, j, k, len, count = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    len = strlen(str);

    /* Allocate memory for the words array */
    words = malloc(sizeof(char *) * (len + 1));
    if (words == NULL)
        return (NULL);

    /* Loop through the string and split it into words */
    for (i = 0; i < len; i++)
    {
        /* Skip leading spaces */
        while (str[i] == ' ')
            i++;

        /* Break the loop if we've reached the end of the string */
        if (i == len)
            break;

        /* Count the number of characters in the current word */
        count = 0;
        for (j = i; j < len && str[j] != ' '; j++)
            count++;

        /* Allocate memory for the current word */
        words[k] = malloc(sizeof(char) * (count + 1));
        if (words[k] == NULL)
        {
            /* Free memory for the words array if allocation fails */
            for (k = k - 1; k >= 0; k--)
                free(words[k]);
            free(words);
            return (NULL);
        }

        /* Copy the current word into the words array */
        for (j = 0; j < count; j++)
            words[k][j] = str[i + j];
        words[k][j] = '\0';
        k++;
        i += count;
    }

    /* Terminate the words array with a NULL pointer */
    words[k] = NULL;

    return (words);
}

