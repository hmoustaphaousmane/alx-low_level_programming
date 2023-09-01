#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number
 *
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (bit_mask)
	{
		if (n & bit_mask)
			flag = 1;

		if (flag)
		{
			if (n & bit_mask)
				_putchar('1');
			else
				_putchar('0');
		}

		bit_mask >>= 1;
	}

	if (!flag)
		_putchar('0');
}
