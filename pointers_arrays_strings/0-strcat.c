#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0; 
	int j = 0;

	while (dest[i] != '\0') /* find the end of dest string */
		i++;

	while (src[j] != '\0') /* copy src string to end of dest string */
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* add null terminator to end of resulting string */

	return dest;
}
