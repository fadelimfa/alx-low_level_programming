#include <stdio.h>

/* more headers goes there */
/**
 * main - it prints if a number is + or -
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
