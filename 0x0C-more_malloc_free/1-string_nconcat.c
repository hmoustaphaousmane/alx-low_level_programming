#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number os bytes of s2 to concatenate to s1
 *
 * Return: a pointer to the new allocated space in memory (Success),
 * NULL (Failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int i, size = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		size++;

	str_concat = malloc(sizeof(char) * (size + 1));
	if (str_concat == NULL)
		return (NULL);

	size = 0;
	for (i = 0; s1[i]; i++)
		str_concat[size++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		str_concat[size++] = s2[i];
	str_concat[size] = '\0';

	return (str_concat);
}
