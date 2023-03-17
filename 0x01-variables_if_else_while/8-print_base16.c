#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - it prints if a number is + or -
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int c;

	for (c = 0; c < 16; ++c)
	{
		printf("%x", c);
	}
	putchar('\n');
	return (0);
}
