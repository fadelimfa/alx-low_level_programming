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
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
	if (c == 'q' || c == 'e')
	else
		putchar(c);
	}
	putchar('\n');
	return (0);
}
