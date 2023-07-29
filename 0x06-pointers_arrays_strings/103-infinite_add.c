#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @n: pointer to the string to be reversed
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + i) != '\0')
		i++;
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - function that adds two numbers
 *
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result (n1 + n2) | 0 if the result cannot
 * be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digit = 0;
	int value1, value2 = 0, tmp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		tmp = value1 + value2 + overflow;
		if (tmp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (tmp % 10) + '0';
		digit++;
		j--;
		i--;
	}
	if (digit == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
