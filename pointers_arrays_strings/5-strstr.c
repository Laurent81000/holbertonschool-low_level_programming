#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: the string to be searched
 * @needle: the substring to be found
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *beginning = haystack;
		char *pattern = needle;
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
		{
			return beginning;
		}
		haystack = beginning + 1;
	}
	return (NULL);
}
