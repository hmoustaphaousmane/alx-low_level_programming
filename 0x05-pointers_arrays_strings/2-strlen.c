#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: the string
 *
 * Return: length_s, the length of the string s
 */

int _strlen(char *s)
{
	int length_s = 0;

	while (*s != '\0')
	{
		length_s++;
		s++;
	}
	return  (length_s);
}
