#include "main.h"

/**
 * flip_bits - Function that returns the number of bits needed to flip to get
 * from one number to anoteher
 *
 * @n: First number (flip from n)
 * @m: Second number (to m)
 *
 * Return: The number of bits needed in order to flip from n to m
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
