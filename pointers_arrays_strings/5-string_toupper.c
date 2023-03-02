#include "main.h"
#include <ctype.h>

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0') 
	{
		if (islower(str[i])) /* fonction islower pour vérifier si le caractère est minuscule */
		{
			str[i] = toupper(str[i]); /* fonction toupper pour convertir le caractère en majuscule */
		}
		i++;
	}

	return (str);
}
