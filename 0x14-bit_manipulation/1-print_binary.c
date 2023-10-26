#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number
 *
 * @n: Number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0;

	while (bit_mask)
	{
		if (n & bit_mask)
			i = 1;
		if (i)
		{
			if (n & bit_mask)
				_putchar('1');
			else
				_putchar('0');
		}
		bit_mask >>= 1;
	}
	if (!i)
		_putchar('0');
}
