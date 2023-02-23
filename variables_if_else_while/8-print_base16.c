/**
 * main - Base 16.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i;

	/* Loop through the hexadecimal digits */
	for (i = 0; i < 16; i++)
	{
		/* Print the digit in lowercase */
		if (i < 10)
		{
			putchar(i + '0'); /* Digits 0-9 */
		}
		else
		{
			putchar(i - 10 + 'a'); /* Digits A-F */
		}
	}

	/* Print newline character */
	putchar('\n');

	return (0);
}
