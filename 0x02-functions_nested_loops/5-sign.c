#include<stdio.h>
/**
 * print_sign - Function that prints the sign of a number
 *
 * @n: caracter to be checked
 *
 * Return: 1 if n > 0 - | if n = 0 | -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
	}
	return (-1);
}
