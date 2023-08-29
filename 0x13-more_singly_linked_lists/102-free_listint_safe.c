#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Function that frees a listint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int x;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			tmp = (*h)->next;
			*h = tmp;
			size++;
		}
		else
		{
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;

	return (size);
}
