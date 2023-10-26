#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 *
 * @n: The number
 * @index: The indes of the bit the be cleared
 *
 * Return: 1 (Success), -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
