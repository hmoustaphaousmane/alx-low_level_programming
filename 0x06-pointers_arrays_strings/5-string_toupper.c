/**
 * string_toupper - function that changes all lowercase letters of
 * a string to uppercase
 *
 * @str: string to be changed
 *
 * Return: ptr, the string str changed to uppercase
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}

	return (ptr);
}
