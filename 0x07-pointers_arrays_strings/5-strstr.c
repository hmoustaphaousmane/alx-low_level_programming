/**
 * _strstr - function that locates a substring
 *
 * @haystack: the string
 * @needle: the substring to be found in haystack
 *
 * Return: a pointer to the beginning of the located string or
 * NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}
