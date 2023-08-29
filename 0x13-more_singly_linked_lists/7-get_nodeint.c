#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function that gets the nth node of a listint_t
 * linked list
 *
 * @head: Head of the listint_t linked lise
 * @index: The index of the node to be got
 *
 * Return: The nth node (Success), NULL (Failure)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
