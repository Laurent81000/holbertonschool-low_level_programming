#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 *
 * @s: Pointeur vers un tableau de caractères.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
