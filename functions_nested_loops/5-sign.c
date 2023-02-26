#include "main.h"

/**
 * print_sign - print the sign of a number
 * @result: the result to return
 * Description: print the sign of a number
 * Return: 1 is true, 0 is false
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}

	/* n < 0 */
	else
	{
		_putchar('-');
		result = -1;
	}

	return(result);
}
