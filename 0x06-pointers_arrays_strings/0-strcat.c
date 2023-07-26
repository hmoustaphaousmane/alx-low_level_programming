/**
 * _strcat - function that concatenates two strings
 *
 * @dest: first string
 * @src: second string to be appended to dest
 *
 * Return: strconcat, the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *strconcat = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (strconcat);
}
