/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: a pointer to the memory area to be filled
 * @b: the constant byte
 * @n: the number of the first bytes to be filled
 *
 * Return: a pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}

	return (s);
}
