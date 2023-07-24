#include <stdio.h>

/**
 * _puts - Function that prints a string
 *
 * @str: the string to be print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
