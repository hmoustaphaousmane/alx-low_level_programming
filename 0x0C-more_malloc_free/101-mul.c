#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * len - function that returns the length of a string
 *
 * @str: a string
 *
 * Return: the legth of str
 */

int len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
