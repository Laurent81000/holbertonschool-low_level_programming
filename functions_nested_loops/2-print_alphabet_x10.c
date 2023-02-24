#include "main.h"

/**
 * print_alphabet_x10 - alphabet x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int x10 = 0;

	while (x10 <= 10)

	{
		x10++;
		/*Print lowercase letters*/
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		/*Print newline character*/
		_putchar('\n');
	}
}
