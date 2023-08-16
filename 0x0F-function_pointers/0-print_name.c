#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: the name to be print
 * @f: a pointer to the f function that prints actually the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
