#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that delete the head node of a listint_t linked list
 *
 * @head: Pointer to the head of the listint_t linked list
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = tmp;

	return (n);
}
