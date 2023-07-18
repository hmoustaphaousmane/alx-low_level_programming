#include<stdio.h>
/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		for (j = 0; j < 26; j++)
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
}
