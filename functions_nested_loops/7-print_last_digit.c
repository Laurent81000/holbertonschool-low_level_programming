#include "main.h"

/**
 * print_last_digit -  last digit
 * @c: the number to check
 *
 * Description: print_last_digit
 * Return: last digit of c
 */
int print_last_digit(int c)
{
	if (c < 0) 
	{ 
		c = -c;
	}

	c = c % 10;
	_putchar(c + 48);
	return(c);
}
