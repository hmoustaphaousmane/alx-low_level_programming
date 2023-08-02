/**
 * is_prime - function that returns 1 if n is prime
 *
 * @n: the number to be checked
 * @checker: the checker
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime(int n, int checker)
{
	if (checker <= 1)
		return (1);
	else if (n % checker == 0)
		return (0);
	return (is_prime(n, checker - 1));
}

/**
 * is_prime_number - function that says if a number is a prime number or not
 *
 * @n: the number
 *
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	int checker = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, checker));
}
