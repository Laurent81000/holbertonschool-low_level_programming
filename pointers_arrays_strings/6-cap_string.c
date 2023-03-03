#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int new_word;

	for (i = 0; str[i] != '\0'; i++)
	{
		new_word = (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
				str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
				str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
				str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
				str[i - 1] == '{' || str[i - 1] == '}');

		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}

	return (str);
}
