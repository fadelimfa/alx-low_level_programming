#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - is
 * @str: i
 * Return: 0 on success, 1 on failure
 */
char **strtow(char *str)
{
        int i, j, k, len, words;
        char **word_array;

        if (str == NULL || *str == '\0')
                return (NULL);
        len = strlen(str);
        words = 0;
        for (i = 0; i < len; i++)
        {
                if (str[i] != ' ')
                {
                        words++;
                        while (str[i] != ' ' && str[i] != '\0')
                                i++;
                }
        }
        if (words == 0) // if there are no words in the input string
                return (NULL);
        word_array = malloc(sizeof(char *) * (words + 1));
        if (word_array == NULL)
                return (NULL);
        for (i = 0, j = 0; j < words; j++)
        {
                while (str[i] == ' ')
                        i++;
                for (k = i; str[k] != ' ' && str[k] != '\0'; k++)
                        ;
                word_array[j] = malloc(sizeof(char) * (k - i + 1));
                if (word_array[j] == NULL)
                        return (NULL);
                strncpy(word_array[j], &str[i], k - i);
                word_array[j][k - i] = '\0';
                i = k;
        }
        word_array[j] = NULL;
        return (word_array);
}

