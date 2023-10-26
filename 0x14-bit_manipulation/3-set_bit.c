#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 *
 * @n: The number
 * @index: The index of the bit to be set to 1
 *
 * Return: 1 (Success), -1 (Failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
