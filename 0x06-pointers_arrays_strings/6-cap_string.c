/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @str: the string to be capitalized
 *
 * Return: str capitalized
 */

char *cap_string(char *str)
{
	char *strtmp = str;
	int capitalise = 1;

	while (*strtmp != '\0')
	{
		if (*strtmp >= 'a' && *ptr <= 'z')
		{
			if (capitalise)
			{
				*strtmp = *ptr - 32;
				capitalise = 0;
			}
		}
		else if (*strtmp == ' ' || *ptr == '\t' || *ptr == '\n' ||
*strtmp == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
*strtmp == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalise = 1;
		}
		else
		{
			capitalise = 0;
		}
		strtmp++;
	}

	return (str);
}
