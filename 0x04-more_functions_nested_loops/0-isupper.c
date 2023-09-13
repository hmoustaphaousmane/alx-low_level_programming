#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 *
 * @c: Character to verify its case
 *
 * Return: 1 if c is uppercase and 0 if not
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
