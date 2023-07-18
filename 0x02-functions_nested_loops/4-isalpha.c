#include<stdio.h>
/**
 * _isalpha - Function that prints the alphabet in lowercase
 *
 * @c: caracter to be checked
 *
 * Return: 1 if the caracater is alphabetic and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
