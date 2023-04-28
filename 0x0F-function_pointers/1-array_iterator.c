#include <stdio.h>
#include "function_pointers.h"

/**
 * print_char_ascii - prints the ASCII value of a character
 * @c: the character to print the ASCII value of
 *
 * Return: Nothing.
 */
void print_char_ascii(char c)
{
    printf("%d\n", (int) c);
}

int main(void)
{
    char str[] = "hello, world!";
    size_t str_len = sizeof(str) / sizeof(str[0]);

    array_iterator(str, str_len, &print_char_ascii);

    return 0;
}
