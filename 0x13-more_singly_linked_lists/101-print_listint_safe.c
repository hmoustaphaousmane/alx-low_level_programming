#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Function that prints a listint_t linked list
 *
 * @head: The head of the listint_t linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	long int x;

	while (head != NULL)
	{
		x = head - head->next;
		size++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (x > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (size);
}
