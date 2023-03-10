#include "main.h"

/**
 * sqrt_helper - recursive helper function for _sqrt_recursion
 *
 * @n: number to find square root of
 * @root: current candidate for square root
 *
 * Return: natural square root of n, or -1 if n doesn't have one
 */
int sqrt_helper(int n, int root)
{
	/* check if we've found the square root */
	if (root * root == n)
		return (root);

	/* check if n doesn't have a natural square root */
	if (root == n / 2 || n <= 0)
		return (-1);

	/* try next candidate */
	return (sqrt_helper(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find square root of
 *
 * Return: natural square root of n, or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
