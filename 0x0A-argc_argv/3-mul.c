#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program that mutiplies numbers
 *
 * @argc: arguments count
 * @argv: arguments value
 *
 * Return: 0 (Succes), 1 if the provided arguments are not two
 */

int main(int argc, char *argv[])
{
	int i, j, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mult = i * j;
	printf("%d\n", mult);

	return (0);
}
