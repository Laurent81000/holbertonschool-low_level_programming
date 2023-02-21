/**
 *main - Task
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if (c != 'q' && c != 'e')
	{
	putchar(c);
	}
	c++;
	}

	putchar('\n');
	return 0;
}
