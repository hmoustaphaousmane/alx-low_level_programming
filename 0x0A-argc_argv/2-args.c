#include <stdio.h>

/**
 * main - entry point of the program : print all received arguments
 *
 * @argc: arguments count
 * @argv: arguments value
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
