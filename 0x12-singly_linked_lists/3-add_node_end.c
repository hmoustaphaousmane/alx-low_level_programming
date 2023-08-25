#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t
 *
 * @head: A pointer to the first element of the list_t list
 * @str: The string to be stored in the new node
 *
 * Return: The address of the new element (Success), NULL (Failure)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp = *head;
	int size = 0;

	while (str[size])
		size++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = size;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
