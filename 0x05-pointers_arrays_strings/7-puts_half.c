#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * puts_half - check the code.
 *@str: is
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i = (len - 1) / 2;

	printf("%s\n", &str[i]);

}
