#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameters
 *
 * @n: number of parameters
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist; /* Syntaxe */
	int sum;
	unsigned int i;

	if (n == 0)
		return (0); /* Donné dans l'énoncé */

	va_start(valist, n);  /* Syntaxe */
	sum = 0;
	for (i = 0; i < n; i++) /* La variable sum est incrémentée avec chaque entier */
	{
		sum += va_arg(valist, int); /* Calcule la somme des entiers passés en argument à la fonction */
	}
	va_end(valist); /* Syntaxe */

	return (sum); /*  Retourne la somme de tous les arguments */
}
