#include <stdio.h>

/**
 * int_index - search for an integer
 *
 * @array: pointer to array of integers
 * @size: size of array
 * @cmp: pointer to compare the function
 *
 * Return: index of first element, -1 if not match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(size <= 0)
		return (-1); /* Donné dans l'énoncé */

	for (i = 0; i < size; i++) /* Boucle à travers le tableau */
	{
		if (cmp(array[i]) !=0) /* Fonction de comparaison */
			return (i);
	}
	return (-1); /* Si aucun élément n'est trouvé */
}
