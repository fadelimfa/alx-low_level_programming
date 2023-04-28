#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments passed
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int sum = 0;

    /* initialize va_list */
    va_start(args, n);

    /* loop through all arguments */
    for (i = 0; i < n; i++)
        sum += va_arg(args, int);

    /* clean memory reserved for va_list */
    va_end(args);

    return (sum);
}
