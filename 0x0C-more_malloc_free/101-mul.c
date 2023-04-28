#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int is_valid_number(char *s) {
    for (int i = 0; i < strlen(s); i++) {
        if (!isdigit(s[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }
    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        printf("Error\n");
        return 98;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("%d\n", num1 * num2);
    return 0;
}
