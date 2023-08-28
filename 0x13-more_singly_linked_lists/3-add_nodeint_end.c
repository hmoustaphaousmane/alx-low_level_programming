#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function that adds a new node at the end of a listint_t
 * list
 *
 * @head: Pointer to the first element of the linstint_t list
 * @n: Integer to be stored into the new node
 *
 * Return: Adress of the new element (Success), NULL (Failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new_node;

	return (new_node);
}
