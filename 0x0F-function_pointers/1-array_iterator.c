#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a given function on each element of
 * an array
 *
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the function to be called on the alements of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < (int) size; i++)
			action(array[i]);
	}
}
