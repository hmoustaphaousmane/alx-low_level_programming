#include <stdio.h>
#include <string.h>

/**
 * print_rev - Function thats prints a string in reverse
 *
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	int i, length_s = strlen(s);

	for (i = length_s - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
