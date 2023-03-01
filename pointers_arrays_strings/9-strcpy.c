#include "main.h"

/**
 * _strcpy - Copy a string
 *
 * @dest: Destination pointer
 * @src: Source pointeur
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
