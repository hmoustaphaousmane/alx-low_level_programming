#include <stdlib.h>

/**
 * array_range - function theat creates an array of integers
 *
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: a pointer the espace memory allocated for the array
 */

int *array_range(int min, int max)
{
	int *block;
	int i, j = 0;

	if (min > max)
		return (NULL);

	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			block[j] = i;
			j++;
		}
		return (block);
	}
	else
		return (NULL);
}
