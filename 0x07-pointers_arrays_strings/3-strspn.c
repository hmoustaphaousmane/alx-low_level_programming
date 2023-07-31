/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: a ponter to string
 * @accept: a pointer to a string
 *
 * Return: the number of bytes in s wich consist only of byter from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				b++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (b);
		}
		s++;
	}

	return (b);
}
