#include<stdio.h>
/**
 * _islower - Checks for lowecase caracters
 *
 * @c: caracter to be checked
 *
 * Return: 1 (Success); 0 (Failures)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
