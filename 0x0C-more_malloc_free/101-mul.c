#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int is_valid_number(char *s);
void multiply(char *num1, char *num2);

/**
 * is_valid_number - check if a string is a valid number
 *
 * @s: the string to check
 *
 * Return: 1 if @s is a valid number, 0 otherwise
 */
int is_valid_number(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
            return (0);
    }

    return (1);
}

/**
 * multiply - multiply two numbers and print the result
 *
 * @num1: the first number
 * @num2: the second number
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, carry, prod;
    int *result;

    /* get length of each number */
    for (i = 0; num1[i] != '\0'; i++)
        len1++;
    for (i = 0; num2[i] != '\0'; i++)
        len2++;

    /* allocate memory for the result */
    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    /* initialize the result to 0 */
    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    /* multiply each digit of num2 by num1 and add to the result */
    for (i = len2 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len1 - 1; j >= 0; j--)
        {
            prod = (num2[i] - '0') * (num1[j] - '0') + carry + result[i + j + 1];
            carry = prod / 10;
            result[i + j + 1] = prod % 10;
        }
        result[i + j + 1] = carry;
    }

    /* print the result */
    i = 0;
    while (result[i] == 0 && i < len1 + len2 - 1)
        i++;
    for (; i < len1 + len2; i++)
        printf("%d", result[i]);
    printf("\n");

    /* free memory */
    free(result);
}

/**
 * main - multiply two numbers passed as arguments
 *
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int num1, num2;

    if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    multiply(argv[1], argv[2]);

    return (0);
}

