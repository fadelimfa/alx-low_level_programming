#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    int index = 0;

    if (len <= 1)
        return (1);

    return (_check_palindrome(s, len, index));
}

/**
 * _check_palindrome - helper function to check if a string is a palindrome
 * @s: the string to check
 * @len: the length of the string
 * @index: the current index being compared
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int len, int index)
{
    if (index >= len / 2)
        return (1);

    if (s[index] != s[len - index - 1])
        return (0);

    return (_check_palindrome(s, len, index + 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);

    return (1 + _strlen_recursion(s + 1));
}
