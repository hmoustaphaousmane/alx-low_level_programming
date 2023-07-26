/**
 * _strncat - fonction that concatenates two string using at most n bytes
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: strconcat, the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *strconcat = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (strconcat);
}
