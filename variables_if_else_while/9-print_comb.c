/**
 *main - single-digit numbers
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers + '0');
		if (numbers <9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
