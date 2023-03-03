#include "main.h"

/**
 * lett_str - 
 * @str: 
 *
 * Return: a pointer to the capitalized string
 */

char *leet(char *str)
{
	char *leet_str = str;
	char leet_chars[] = {'4', '3', '0', '7', '1'};
	char normal_chars[] = {'a', 'e', 'o', 't', 'l'};
	int i;
	int j;

	for (i = 0; i < 5; i++) 
	{
		for (j = 0; str[j] != '\0'; j++) 
		{
			if (str[j] == normal_chars[i] || str[j] == normal_chars[i] - 32) 
			{
				leet_str[j] = leet_chars[i];
			}
		}
	}

	return (leet_str);
}
