#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Funciton that prints all the elements of a list_t
 *
 * @h: The list_t to be printed
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}
