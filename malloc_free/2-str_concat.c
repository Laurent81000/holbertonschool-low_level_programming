#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings and returns
 * a pointer to the newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	char *str;

	/* Cherche si la chaîne1 string1 (s1) est vide, renvoi NULL, sinon renvoi la chaîne */
	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = strlen(s1);
	/* Idem pour s2 */
	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = strlen(s2);
	/** 
	 * Alloue de la mémoire pour une chaîne de caractères (str)
	 * qui a une taille de s1_len plus s2_len. Sinon NULL
	 */
	str = malloc(s1_len + s2_len + 1);
	if (str == NULL)
		return (NULL);
	/* Copie les chaînes de caractères s1 et s2
	 * dans une nouvelle chaîne de caractères,
	 * str, et retourne cette chaîne.
	 * Elle prend en compte la longueur des chaînes s1 et s2
	 * et les copie jusqu'à la fin de la plus courte chaîne.
	 * La chaîne finale est marquée par un caractère de fin de chaîne '\0'
	 if (s1_len)
	 strncpy(str, s1, s1_len);

	 if (s2_len)
	 strncpy(str + s1_len, s2, s2_len);

	 *(str + s1_len + s2_len) = '\0';

	 return (str);
	 */

	strcpy(str, s1);
	strcat(str, s2);

	return str;
}
