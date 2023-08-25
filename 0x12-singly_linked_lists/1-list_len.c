#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list
 *
 * @h: The linked list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
