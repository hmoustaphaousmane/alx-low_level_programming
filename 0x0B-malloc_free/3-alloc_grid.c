#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integers
 *
 * @width: the width of the array (number of columns)
 * @height: the height of the array (number of rows)
 *
 * Return: a pointer to a 2 dimensional array of integers (Success),
 * NULL (Failure)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);

				return (NULL);
			}
		}

		return (array);
	}
	else
	{
		return (NULL);
	}
}
