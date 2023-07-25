#include <stdio.h>

/**
 * _atoi - Function that converts a string to integer
 *
 * @s: the string to be cnverted to integer
 *
 * Return: the result of s converted to integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	if (*s == '+')
	{
		s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			s++;
		}
		else
		{
			break;
		}
	}
	return (sign * result);
}
