#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 * Return: pointer to the new allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len; /* Défini longeur chaine 1 connue */
	unsigned int i; /* Compteur */
	unsigned int o = n; /* Permet d'utiliser n */
	char* str; /* Nouvelle chaine de caractères */

	for (s1_len = 0; s1[s1_len]; s1_len++) /* Parcours s1 et compte nb caractères */ 
		o++; /* Variable o incrémentée pour refléter ce nb dans str */

	str = malloc((o + 1) * sizeof(char)); /* Alloue de la mémoire à la nouvelle chaine str */
	if (str == NULL)	/* Syntaxe de malloc, STOP si NULL ou 0 */
		return (NULL);

	o = 0;	/* Iiniter o */

	for (i = 0; s1[i]; i++)	/* Boucle pour copier s1 dans str */
		str[o++] = s1[i]; 

	for (i = 0; s2[i] && i < n; i++) /* Boucle pour copier s2 dans str */
		str[o++] = s2[i];	

	str[o] = '\0'; /* Jusqu'à \0 car caractères (char) */

	return (str); 
}
