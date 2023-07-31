#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: a pointer to a string
 * @c: the character to be located in s
 *
 * Return: a pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while ((s[i] != c) && (s[i] != '\0'))
	{
		i++;
	}

	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
