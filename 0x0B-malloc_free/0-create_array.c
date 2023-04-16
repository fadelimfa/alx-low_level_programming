#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * reset_to_98 - check the code.
 *@n: is
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	    if (size == 0) {
        return NULL;
    }

    char *array = malloc(size * sizeof(char));

    if (array == NULL) {
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}
