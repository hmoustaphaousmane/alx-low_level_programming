#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *c = (unsigned char *) &i;

	return ((int)*c);
}
