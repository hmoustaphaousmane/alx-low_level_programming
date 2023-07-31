#include <stdio.h>

/**
 * print_chessboard - function that prints a chessboard
 *
 * @a: a pointer a an array of size 8
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
