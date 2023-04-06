#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * prime- number
 *
 * @n: Num
 * @i: Sta
 *
 * Return: whatever
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0)
	return (prime(n, i - 1));
}
/**
 * is_prime_number- is
 * @n: is
 * Return: whatever
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
