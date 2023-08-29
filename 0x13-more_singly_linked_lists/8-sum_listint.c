#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Function that sums all the data (n) of a listint_t linked list
 *
 * @head: Head of the listint_t linked list
 *
 * Return: The sum of all ns (Success), 0 (Failure)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
