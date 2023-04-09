#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *reverse_array - check the code.
 *@a: is
 *@n: is
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j) {
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
