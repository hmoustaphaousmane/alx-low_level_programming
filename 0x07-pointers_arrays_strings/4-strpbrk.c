/**
 * _strpbrk - function that searches a string for any of aset of bytes
 *
 * @s: a pointer to the string
 * @accept: a pointer to the string to be searched in s
 *
 * Return: a pointer to the byte in s that matched one of the bytes in accet or
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
