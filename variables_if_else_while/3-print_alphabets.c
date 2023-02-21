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
	char alp[57] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int i;

	for (i = 0; i < 57; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
