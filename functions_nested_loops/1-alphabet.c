#include "main.h"

/**
 * print_alphabet: alphabet prototype
 * description : Write a function that prints the alphabet
 * Return: Always 0 (Success)
 */

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
