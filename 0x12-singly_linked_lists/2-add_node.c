#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node at the begining of a list_t list
 *
 * @head: A pointer to the first element of the list_t list
 * @str: New string value of the node to be added
 *
 * Return: The address of the new element (Success), NULL (Failure)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int size = 0;

	while (str[size])
		size++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = size;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
