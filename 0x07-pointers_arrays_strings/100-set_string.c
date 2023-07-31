#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: a point to a pointer to the string
 * @to: a pointer to the string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
