#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 *
 * @b: A string of 0 and 1 chars
 *
 * Return: The converted number (Success), 0 (Failure) if there is at least
 * one char of b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint_value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint_value = (uint_value << 1) + (b[i] - '0');
		i++;
	}

	return (uint_value);
}
