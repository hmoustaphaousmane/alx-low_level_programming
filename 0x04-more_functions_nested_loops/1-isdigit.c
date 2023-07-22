#include "main.h"

/**
 * _isdigit - Function that checks for a digit
 *
 * @c: integer to be checked
 *
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
