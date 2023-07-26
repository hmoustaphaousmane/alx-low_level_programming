/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: the array to be reversed
 * @n: the number of elements of the array a
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
