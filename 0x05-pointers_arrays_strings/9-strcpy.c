#include <stdio.h>

/**
 * _strcpy - Function that prints the string pointed to by src
 *
 * @dest: return value
 * @src: the string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
