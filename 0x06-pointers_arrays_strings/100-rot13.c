/**
 * rot13 - function that encodes a string using rot13
 *
 * @str: the string to be encoded using rot13
 *
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char sample[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char samplerot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == sample[j])
			{
				str[i] = samplerot[j];
				break;
			}
		}
	}

	return (str);
}
