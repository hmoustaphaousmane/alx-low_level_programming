#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Function that returns the number of elements in a linked
 * listint_t list
 *
 * @h: The first element of the linked listint_t list
 *
 * Return: Number of elements in the linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
