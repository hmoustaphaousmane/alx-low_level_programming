#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function that prints all elements of a listint_t
 *
 * @h: the first element of the listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
