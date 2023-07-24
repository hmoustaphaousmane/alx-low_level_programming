#include <stdio.h>
#include <string.h>

/**
 * puts_half - Function that prints half of a string
 *
 * @str: the provided string
 */

void puts_half(char *str)
{
	int i;
	int length_str = strlen(str);
	int start_index = length_str / 2;

	if (length_str % 2 == 1)
	{
		start_index++;
	}
	for (i = start_index; i < length_str; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
