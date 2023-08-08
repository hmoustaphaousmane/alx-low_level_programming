#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to s1s2 (Success), NULL (Failure)
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int i, j = 0, size = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		size++;

	str_concat = malloc(sizeof(char) * size);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_concat[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_concat[j++] = s2[i];

	return (str_concat);
}
