#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i; /* Compteur */
	char *array; /* Utiliser des char avec malloc */

	if (nmemb == 0 || size == 0)
		return (NULL);	/* Consigne - If nmemb or size is 0, then _calloc returns NULL */

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);	/* Consigne - If malloc fails, then _calloc returns NULL */

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0; /* Boucle qui parcourt le tableau array et affecte la valeur 0 à chaque case du tableau. nmemb est le nombre d'éléments du tableau, et size est la taille de chaque élément */

	return (array);
}
