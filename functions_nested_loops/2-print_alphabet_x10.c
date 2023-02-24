#include "main.h"

/**
 * print_alphabet_x10 - alphabet x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int x10 = 1;

	while (x10 <= 10)

	{
		/*Print lowercase letters*/
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		/*Print newline character*/
		i = 97;
		x10++;
		_putchar('\n');
	}
}
