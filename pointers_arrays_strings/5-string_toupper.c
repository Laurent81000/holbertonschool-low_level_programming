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
		if (islower(str[i])) /* fn islower vérifie minuscule */
		{
			str[i] = toupper(str[i]); /* fn toupper converti en maj */
		}
		i++;
	}

	return (str);
}
