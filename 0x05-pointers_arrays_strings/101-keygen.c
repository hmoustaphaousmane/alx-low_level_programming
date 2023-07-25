#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_random_char - Function that generates a random character
 *
 * Return: a random character
 */

const char charset[] = "abcdefghijklmnopqrstuvwxyz" +
"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

char generate_random_char(void)
{
	int index = rand() % (sizeof(charset) - 1);

	return (charset[index]);
}

/**
 * generate_password - Function that generates the complete password by
 * repeatedly calling generateRandomChar()
 *
 * @password: the password to be generated
 */

void generate_password(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generate_random_char();
	}
	password[PASSWORD_LENGTH] = '\0';
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	generate_password(password);
	printf("Generated password: %s\n", password);

	return (0);
}
