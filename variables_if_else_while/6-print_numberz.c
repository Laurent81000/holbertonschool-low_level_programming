/**
 *main - 10 starting from 0 - no variable char - 2 putchar function max
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; i < 10; i++ )
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
