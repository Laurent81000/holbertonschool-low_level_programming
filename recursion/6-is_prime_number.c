/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1) /* 1 and below are not prime */
		return (0);

	return is_prime_helper(n, 2);
}

/**
 * is_prime_helper - recursive helper function to check if a number is prime
 *
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	/* Base case: n is divisible by i, so it's not prime */
	if (n % i == 0)
		return (0);

	/* Base case: we've reached the end of the loop, so it's prime */
	if (i * i > n)
		return (1);

	/* Recursive case: check the next divisor */
	return is_prime_helper(n, i + 1);
}
