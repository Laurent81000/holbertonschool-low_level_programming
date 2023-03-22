#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all given arguments
 *
 * @format: correspond to types of arguments given
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int begin = 0;
	char *s = "";

	va_start(arguments, format);
	while (format && format[begin])
	{
		switch (format[begin])
		{
		case 'c':
			printf("%s%c", s, va_arg(arguments, int));
			break;
		case 'i':
			printf("%s%d", s, va_arg(arguments, int));
			break;
		case 'f':
			printf("%s%f", s, va_arg(arguments, double));
			break;
		case 's':
			s = va_arg(arguments, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s%s", s, s);
			break;
		default:
			break;
		}
		s = ", ";
		begin++;
	}
	printf("\n");
	va_end(arguments);
}
