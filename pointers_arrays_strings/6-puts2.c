#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to print
 *
 * Description: prints every other (1/2) character of a string
 * Return: void
 */
void puts2(char *str)
{ 
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		else
		{
		}
		i ++;
	}        
	_putchar('\n');
}
