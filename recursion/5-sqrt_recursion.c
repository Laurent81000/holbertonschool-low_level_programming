#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - helper function to compute the square root recursively
 * @n: the number to compute the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n if found, -1 otherwise
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n) /* If i^2 is greater than n, n doesn't have a natural sqrt */
		return (-1);
	if (i * i == n) /* If i^2 is equal to n, we found the natural sqrt */
		return (i);
	return (_sqrt_helper(n, i + 1)); /* Recurse with the next guess for the square root */
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* If n is negative, it doesn't have a natural sqrt */
		return (-1);
	return (_sqrt_helper(n, 0)); /* Call the helper function with an initial guess of 0 */
}
