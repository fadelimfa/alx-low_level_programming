#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *print_chessboard - check the code.
 *@a: is
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);
		}
		putchar('\n');
	}
}
