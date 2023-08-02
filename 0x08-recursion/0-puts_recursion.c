#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string
 *
 * @s: a pointer to a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
