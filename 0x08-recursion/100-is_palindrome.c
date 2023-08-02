/**
 * check_palindrome - function that checks if a string is a palindrome
 *
 * @s: the string to be checked
 * @len_s: the lenght of s
 * @index: the index of the string to be checked.
 *
 * Return: 1 if the s is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int len_s, int index)
{
	if (s[index] == s[len_s / 2])
		return (1);

	if (s[index] == s[len_s - index - 1])
		return (check_palindrome(s, len_s, index + 1));

	return (0);
}

/**
 * find_strlen - function that returns the length of a string
 *
 * @s: the string
 *
 * Return: the length of s
 */
int find_strlen(char *s)
{
	int len_s = 0;

	if (*(s + len_s))
	{
		len_s++;
		len_s += find_strlen(s + len_s);
	}

	return (len_s);
}

/**
* is_palindrome - function that returns 1 if s is a palindrome
* @s: the string to be checked
*
* Return: 1 if s is a palindrome
*/

int is_palindrome(char *s)
{
	int i = 0;
	int len_s = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len_s, i));
}
