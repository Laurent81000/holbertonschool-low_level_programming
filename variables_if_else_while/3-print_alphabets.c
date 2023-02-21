/**
 * main - Program that prints the alphabet in lowercase.
 *
 * source https://www.onlinegdb.com/online_c_compiler
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
