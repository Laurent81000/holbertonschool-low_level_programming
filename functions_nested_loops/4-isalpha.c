#include "main.h"

/**
 * _isalpha -  function that checks for alphabetic character
 * @c: the caracter to check
 *
 * Description: a lowercase character is lowercase or uppercase
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	/* 'a' = 97 - 'z' = 122 etc ... */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
