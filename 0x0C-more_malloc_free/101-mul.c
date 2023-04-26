#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


#define MAX_DIGITS 10000

void error_exit(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

int validate_number(const char* num) {
    if (num == NULL || strlen(num) == 0)
        return 0;
    for (int i = 0; i < strlen(num); i++) {
        if (!isdigit(num[i]))
            return 0;
    }
    return 1;
}

void multiply(const char* num1, const char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int i, j, k, carry = 0;
    int* prod = calloc(len1 + len2, sizeof(int));

    if (prod == NULL)
        error_exit("Out of memory");

    for (i = len1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            prod[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
            carry = prod[i + j + 1] / 10;
            prod[i + j + 1] %= 10;
        }
        prod[i + j + 1] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] = prod[i] + '0';

    result[len1 + len2] = '\0';

    for (i = 0; i < len1 + len2; i++)
        if (result[i] != '0')
            break;

    if (i == len1 + len2)
        strcpy(result, "0");
    else
        memmove(result, &result[i], len1 + len2 - i + 1);

    free(prod);
}

int main(int argc, char** argv) {
    if (argc != 3)
        error_exit("Usage: mul num1 num2");

    if (!validate_number(argv[1]) || !validate_number(argv[2]))
        error_exit("Arguments must be positive integers");

    char result[MAX_DIGITS];
    multiply(argv[1], argv[2], result);
    printf("%s\n", result);

    return 0;
}

