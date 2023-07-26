/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @str: the string to be capitalized
 *
 * Return: strcap, str capitalized
 */

char *cap_string(char *str)
{
	char *strcap = str;
	int capitalize = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == 't' || *str == 'n' || *str == ',' ||
*str == ';' || *str == '.' || *str == '!' || *str == '?' ||
*str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		str++;
	}

	return (strcap);
}
