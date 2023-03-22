#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist,n); /* Syntaxe */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int)); /* Imprime chaque argument sous forme d'entier */
		if (separator != NULL && i < (n - 1)) /* Imprimer le separator s'il n'est pas NULL et que le compteur i est inférieur au nombre d'arguments (n - 1) qui vérifie si le mot separator peut être imprimé entre les nombres ou non */
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);
}
