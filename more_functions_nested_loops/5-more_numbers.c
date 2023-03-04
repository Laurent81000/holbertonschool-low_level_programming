#include "main.h"

/**
 * print_numbers_0_to_14 - writes a line of numbers from 0 to 14
 */
void print_numbers_0_to_14(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
	}

	_putchar('\n');
}

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_numbers_0_to_14();
	}
}
