#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 *
 * @size: the length of the array
 * @c: the char to initilize the array with
 *
 * Return: NULL (Failure), a pointer to the array (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
