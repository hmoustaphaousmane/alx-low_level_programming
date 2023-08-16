#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Function pointer that selects the correct function to perform
 * the operation asked by the user
 *
 * @s: the operation to be performed
 *
 * Return: a pointer to the function that corresponds to <s>, or NULL (Failure)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
