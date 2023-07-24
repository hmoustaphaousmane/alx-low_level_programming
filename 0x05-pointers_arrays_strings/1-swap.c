#include <stdio.h>

/**
 * swap_int - Function that swaps the value of two integers
 *
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
