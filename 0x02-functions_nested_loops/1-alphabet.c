#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - it prints if a number is + or -
 * Return: 0
 */
/* betty style doc for function main goes there */
#include "main.h"
int main(void)
{
	print_alphabet(void){
		char letter = 'a';
		while (letter <= 'z') {
			putchar(letter);
			letter++;
		}
		putchar('\n');
	}
	print_alphabet();
	return (0);
}
