#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 *
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp does not return 0,
 * or -1 (Failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
