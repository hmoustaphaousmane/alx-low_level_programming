/**
 * _strncpy - function that copies a string
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: strcpy, the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *strcpy = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '0';
		dest++;
		n--;
	}

	return (strcpy);
}
