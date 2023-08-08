#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memeory which contains a copy of the string given as parameter
 *
 * @str: a given string
 *
 * Return: NULL (Failure), a pointer to the allpcated space (Success)
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	str_cpy = malloc(sizeof(char) * (size + 1));
	if (str_cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str_cpy[i] = str[i];

	str_cpy[size] = '\0';
	return (str_cpy);
}
