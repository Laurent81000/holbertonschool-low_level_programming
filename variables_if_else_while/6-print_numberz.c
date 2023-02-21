/**
 *main - 10 starting from 0 - no variable char - 2 putchar function max
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	i = 10;
	while (i < 20)
	{
		putchar('1');
		putchar((i % 10) + '0');
		i++;
	}

	putchar('\n');
	return (0);
}
