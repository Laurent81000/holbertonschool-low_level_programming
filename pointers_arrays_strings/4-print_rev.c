#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to the string to be printed
 */
void print_rev(char *s)
{
	int i;
	
	i = 0;
	/* pointeur vers tableau de caractères - print a string */
	while (s[i] != '\0')
	{
		i++;
	}
	/* inverser la chaine */
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
