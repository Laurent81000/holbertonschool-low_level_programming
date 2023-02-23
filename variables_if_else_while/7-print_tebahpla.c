/**
 * main - Alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i = 122; /* ASCII value of 'z' */

	/* Print lowercase letters in reverse */
	while (i >= 97) /* ASCII value of 'a' */
	{
		putchar(i);
		i--;
	}

	/* Print newline character */
		putchar('\n');

	return 0;
}
