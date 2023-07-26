/**
 * leet - function that encodes a string into 1337
 *
 * @str: the string to be encoded
 *
 * Return: ptr, str encoded
 */

char *leet(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str == 'a' || *str == 'A')
		{
			*str = '4';
		}
		else if (*str == 'e' || *str == 'E')
		{
			*str = '3';
		}
		else if (*str == 'o' || *str == 'O')
		{
			*str = '0';
		}
		else if (*str == 't' || *str == 'T')
		{
			*str = '7';
		}
		else if (*str == 'l' || *str == 'L')
		{
			*str = '1';
		}
		str++;
	}

	return (ptr);
}
