#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: size of the memory space to be allocated
 *
 * Return: a pointer to the allocated space (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
