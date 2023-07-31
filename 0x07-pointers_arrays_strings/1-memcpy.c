/**
 * _memcpy - function that copies memory area
 *
 * @dest: a pointer to the copied memory area
 * @src: a pointer to the memory area to be copied
 * @n: the number of n first bytes of src
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
