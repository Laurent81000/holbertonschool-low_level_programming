/**
 * main - alphabet - prototype
 *
 * Return: Always 0 (Success)
 */

#include "main.h"

void print_alphabet(void)
{
	int i = 97;
	/*Print lowercase letters*/
	while (i < 123)
	{
		_putchar(i);
		i++;
	}

	i = 65;

	/*Print newline character*/
	_putchar('\n');
}
