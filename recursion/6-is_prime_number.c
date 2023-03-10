/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1) /* 1 and below are not prime */
		return (0);

	/* Check if n is divisible by any number from 2 to n-1 */
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
