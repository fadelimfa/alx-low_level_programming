#include <stdio.h>

/**
 * main - it prints a text
 * Return: 0
 */
int main(void)
{
char a;
int b;
float c;
long int lb;
long long int ab;
	printf("Size of a char: %lu byte\(s\)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte\(s\)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte\(s\)\n", (unsigned long)sizeof(lb));
	printf("Size of a long long int: %lu byte\(s\)\n", (unsigned long)sizeof(ab));
	printf("Size of a float: %lu byte\(s\)\n", (unsigned long)sizeof(c));
	return (0);
}
