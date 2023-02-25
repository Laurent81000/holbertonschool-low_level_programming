#include "main.h"

/**
 * int _islower(int c) -  function that checks for lowercase character
 * param: c the caracter to check
 * Return: Always 0 (Success)
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
