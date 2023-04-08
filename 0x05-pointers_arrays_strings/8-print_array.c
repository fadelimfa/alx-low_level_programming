#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *print_array - check the code.
 *@a: is
 *@n: is
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	if (n == 0)
		return;

	printf("%d", *a);
	if (n != 1)
		printf(", ");

	print_array(a + 1, n - 1);

}
