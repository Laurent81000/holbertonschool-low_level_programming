/**
 * main - Program that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i = 97;
	/*Print lowercase letters*/
	while (i < 123)
	{
		putchar(i);
		i++;
	}

	i = 65;

	/*Print newline character*/
	putchar('\n');

	return (0);
}
