#include "main.h"

void print_space_line(int n);

/**
 * print_diagonal - Prints a diagonal line
 * @n: length of the line
 *
 * Description: does nothing if n negative or null.
 */
void print_diagonal(int n)
{
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}

	spaces = n;

	for (; n > 0; n--)
	{
		print_space_line(spaces - n);
		_putchar('\\');
		_putchar('\n');
	}
}

/**
 * print_space_line - Prints a  line of
 * spaces with the specified length.
 * @n: number of occurrences of the space
 *
 * Description: if n is negative or null, does nothing.
 */
void print_space_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar(' ');
	}
}
