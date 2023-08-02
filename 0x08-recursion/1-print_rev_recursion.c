#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: a pointer to a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
