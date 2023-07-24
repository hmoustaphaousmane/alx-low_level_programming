#include <stdio.h>

/**
 * puts2 - Function that prints other caracter in a string starting with the
 * first caracter
 *
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
