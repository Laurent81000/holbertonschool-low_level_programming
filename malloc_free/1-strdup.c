#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: pointer to a string
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *new_string;
	int i;
	int j;

	/* Donné dans l'énoncé */
	if (str == NULL)
		return (NULL);

	/* Boucle pour itérer str */
	i = 0;
	while (str[i] != '\0')
		i++;
	/**
	 * Appeler malloc pour demander la mémoire (+1 pour '/0') +
	 * vérifier la valeur retournée par malloc (sizeof) +
	 * libérer la mémoire (free)
	 */
	new_string = malloc(sizeof(char) * i + 1);
	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}
	/* copie de la string */
	j = 0;
	while (j <= i)
	{
		new_string[j] = str[j];
		j++;
	}
	return (new_string);
}
