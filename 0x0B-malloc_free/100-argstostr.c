#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all arguments of the program
 *
 * @ac: argments count
 * @av: arguments values
 *
 * Return: a pointer to the concatenated string (Success), NULL (Failure)
 */

char *argstostr(int ac, char **av)
{
	char *str_concat = NULL;
	int i = ac, j = 0, k, sum = 0, tmp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (strlen(av[ac]) + 1);
	str_concat = (char *) malloc(sum + 1);

	if (str_concat != NULL)
	{
		while (j < i)
		{
			for (k = 0; av[j][k] != '\0'; k++)
				str_concat[k + tmp] = av[j][k];
			str_concat[tmp + k] = '\n';
			tmp += (k + 1);
			j++;
		}
		str_concat[tmp] = '\0';
	}
	else
		return (NULL);
	return (str_concat);
}
