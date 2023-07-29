#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 *
 * @b: the buffer to be printed
 * @size: the size of bytes to be printed
 */

void print_buffer(char *b, int size)
{
	int i, j, k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}

		for (i = 0; i < j; i++)
		{
			int s = *(b + k + i);

			if (s < 32 || s > 132)
				s = '.';
			printf("%c", s);
		}

		printf("\n");
		k += 10;
	}
}
