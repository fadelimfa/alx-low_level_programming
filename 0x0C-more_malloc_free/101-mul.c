#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


#define MAX_DIGITS 10000


void validate_number(char *num) {
    if (num == NULL || strlen(num) == 0) {
        printf("Error: invalid input\n");
        exit(1);
    }

    for (int i = 0; i < (int)strlen(num); i++) {
        if (num[i] < '0' || num[i] > '9') {
            printf("Error: invalid input\n");
            exit(1);
        }
    }
}

char *multiply(char *num1, char *num2) {
    validate_number(num1);
    validate_number(num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);
    char *result = (char *)calloc(len1 + len2 + 1, sizeof(char));

    if (result == NULL) {
        printf("Error: memory allocation failed\n");
        exit(1);
    }

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int k = i + j + 1;
            int temp = (num1[i] - '0') * (num2[j] - '0') + carry + result[k] - '0';
            result[k] = temp % 10 + '0';
            carry = temp / 10;
        }
        result[i] += carry;
    }

    if (result[0] == '0') {
        memmove(result, &result[1], len1 + len2);
    }

    return result;
}

int main(void) {
    char num1[MAX_DIGITS];
    char num2[MAX_DIGITS];
    char result[MAX_DIGITS];

    printf("Enter first number: ");
    fgets(num1, MAX_DIGITS, stdin);
    printf("Enter second number: ");
    fgets(num2, MAX_DIGITS, stdin);

