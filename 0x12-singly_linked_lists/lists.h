#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_t - Singly linked list
 *
 * @str: string value
 * @len: size of the string
 * @next: pointer to the next node
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
