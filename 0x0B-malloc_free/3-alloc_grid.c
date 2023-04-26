#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - check the code.
 *@s1: is
 *@s2: is
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0) {
        return NULL;
    }

    grid = malloc(sizeof(int *) * height);
    if (grid == NULL) {
        return NULL;
    }

    for (i = 0; i < height; i++) {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL) {
            /* Free previously allocated rows */
            for (j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        for (j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

