#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_line - check the code.
 * Return: Always 0.
 */

void print_line(int n)
{

	if(n <= 0 ){
			putchar('\n');
			return;
	}
	for (int i = 0; i < n; i++){
		putchar('_');
	}
	putchar('\n');

}




