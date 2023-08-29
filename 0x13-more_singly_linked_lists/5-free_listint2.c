#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a listint_t list
 *
 * @head: Pointer to the head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
}
