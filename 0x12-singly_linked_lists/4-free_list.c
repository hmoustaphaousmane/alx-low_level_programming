#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 *
 * @head: the first element of the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
