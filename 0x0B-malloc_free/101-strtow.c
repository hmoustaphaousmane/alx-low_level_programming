#include <stdlib.h>

/**
 * len - function that returns the length of a string
 *
 * @str: the string
 *
 * Return: the lenght of str
 */

int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}

	return (len);
}

/**
 * count_words - function that counts the number of words in a string
 *
 * @str: a string
 *
 * Return: the number of words in str
 */

int count_words(char *str)
{
	int i = 0, counter = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
			i++;
		else if (((str[i] == ' ') || (str[i] == '\0')) && i &&
(str[i - 1] != ' '))
		{
			counter += 1;
			i++;
		}
		else
			i++;
	}

	return (counter);
}

/**
 * strtow - function that splits a string into words
 *
 * @str: the string to be splet
 *
 * Return: a pointer to an array of strings (words) (Success), NULL (Failure)
 */

char **strtow(char *str)
{
	char **split;
	int i, j = 0, tmp = 0, size = 0, words_count = count_words(str);

	if (words_count == 0)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (words_count + 1));
	if (split == NULL)
	{
		for (i = 0; i <= len(str) && words_count; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i &&
((str[i - 1] != ' ')))
			{
				split[j] = (char *) malloc(sizeof(char) * size + 1);
				if (split[j] != NULL)
				{
					while (tmp < size)
					{
						split[j][tmp] = str[i - size + tmp];
						tmp++;
					}
					split[j][tmp] = '\0';
					size = tmp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);
					free(split);
					return (NULL);
				}
			}
		}
		split[words_count] = NULL;
		return (split);
	}
	else
		return (NULL);
}
