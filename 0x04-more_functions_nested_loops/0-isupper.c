#include "main.h"

/*
 * main - Entry point of the program
 *
 * @c: caracter to verify its case
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
