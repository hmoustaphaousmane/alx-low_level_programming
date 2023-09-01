#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 *
 * @n: The number
 * @index: The index of the bit to be returned
 *
 * Return: The value of the bit at index index (Success), -1 (Failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);

	return (bit & 1);
}
