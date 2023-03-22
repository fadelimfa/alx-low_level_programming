#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * print_alphabet - Prints the lowercase alphabet using _putchar
 *
 * Return: void
 */
#include "main.h"

int _islower(int c)
{
	int i = islower(c);
	if (i > 0 )
		return (1);
	else
		return (0);
}


