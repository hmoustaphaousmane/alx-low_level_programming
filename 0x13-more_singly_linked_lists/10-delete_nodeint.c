#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node at index index of
 * a listint_t lnked list
 *
 * @head: A pointer to the head of the listint_t linked list
 * @index: The index of the node to be deleted
 *
 * Return: 1 (Success), 0 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		del_node = (*head);
		(*head) = (*head)->next;
		free(del_node);
		return (1);
	}

	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	del_node = tmp->next;
	tmp->next = del_node->next;
	free(del_node);

	return (1);
}
