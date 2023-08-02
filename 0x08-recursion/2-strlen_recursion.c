/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: a pointer to a string
 *
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	int len_s = 0;

	if (*s != '\0')
	{
		len_s++;
		len_s += _strlen_recursion(s + 1);
	}

	return (len_s);
}
