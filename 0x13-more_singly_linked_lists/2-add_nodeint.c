#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Function that adds a new node at the beging of a listint_t
 *
 * @head: Pointer the the first node of the listint_t list
 * @n: Value the be stored in the new node
 *
 * Return: Adress of the new element (Success), NULL (Failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
