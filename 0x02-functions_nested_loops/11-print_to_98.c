#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: number to start from
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j == 98)
				printf("%d\n", j);
			else
				printf("%d, ", j);
		}
	}
}
