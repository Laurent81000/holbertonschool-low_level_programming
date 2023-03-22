#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - print strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)"); /* Consigne - If one of the string is NULL, print (nil) */
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');

	va_end(args);
}
