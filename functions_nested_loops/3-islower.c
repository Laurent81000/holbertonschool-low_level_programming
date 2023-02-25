#include "main.h"

/**
 * int _islower -  function that checks for lowercase character
 * Description - a lowercase character is between 97 and 122
 * Return - 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* 'a' = 97 - 'z' = 122 */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
