#include<stdio.h>
/**
 *  _abs - Compute the absolute value of an integer
 *
 * @n: the integer to be used
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
