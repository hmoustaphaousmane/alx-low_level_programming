#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer the previous espace memory
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size of the new memory block
 *
 * Return: a pointer the the new memory space memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	unsigned int i;

	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		return (tmp);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp = malloc(new_size);
		if (tmp != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)tmp + i) = *((char *)ptr + i);
			free(ptr);
			return (tmp);
		}
		else
			return (NULL);
	}
}
