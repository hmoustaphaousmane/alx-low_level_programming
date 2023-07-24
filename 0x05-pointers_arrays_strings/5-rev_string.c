#include <stdio.h>
#include <string.h>

/**
 * rev_string - Function that reverse a string
 *
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i, length_s = strlen(s);

	for (i = 0; i < length_s / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length_s - i - 1];
		s[length_s - i - 1] = temp;
	}
}
