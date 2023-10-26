#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: The number to flip from
 * @m: The number to flip to
 *
 * Return: The number of bits needed in order to flip n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;
	int counter = 0;

	x = n ^ m;
	while (x != 0)
	{
		counter++;
		x &= (x - 1);
	}

	return (counter);
}
