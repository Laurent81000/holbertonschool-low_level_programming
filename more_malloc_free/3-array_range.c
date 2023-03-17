#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 *
 * Créer une fonction qui prend en paramètres min et max et qui retourne un pointeur vers un tableau d'entiers comprenant toutes les valeurs entre min (inclus) et max (inclus), ordonnés de min à max. Si min est supérieur à max, la fonction doit retourner NULL. Si malloc échoue, elle doit aussi retourner NULL.
 */
int *array_range(int min, int max)
{
	int *ptr; /* Pointeur du nouvel array d'integers */
	int i;

	if (min > max)
		return (NULL); /* Consigne - If min > max, return NULL */

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL); /* Consigne - If malloc fails, return NULL */

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min; /* The array created should contain all the values from min (included) to max (included), ordered from min to max */

	return (ptr); /* Consigne - Return: the pointer to the newly created array */
}
