#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a linstint_t list
 *
 * @head: First element of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
