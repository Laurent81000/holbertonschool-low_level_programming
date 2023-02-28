#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to print
 *
 * Description: prints every other (1/2) character of a string
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* printf ("%d %d %d", i, n, a[i]); */
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
