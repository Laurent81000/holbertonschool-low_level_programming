#include "main.h"

/**
 * print_line - Prints a line of undercores with the
 * specified length
 * @n: number of occurrences of the underscore
 *
 * Description: if n is negative or null, only prints the
 * newline character
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
