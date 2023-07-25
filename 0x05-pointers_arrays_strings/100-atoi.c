#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Function that converts a string to integer
 *
 * @s: the string to be cnverted to integer
 *
 * Return: the result of s converted to integer
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 &&
				 s[i] - '0' > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
