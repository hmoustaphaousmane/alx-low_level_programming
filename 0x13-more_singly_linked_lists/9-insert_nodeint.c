#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts a new node at the given
 * position of a listint_t linked list
 *
 * @head: Pointer to the head of the listint_t linked list
 * @idx: Index of the list where the new node should be added
 * @n: The value of the new node
 *
 * Return: Adress of the new node (Success), NULL (Failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	if (idx != 0)
	{
		tmp = *head;
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
