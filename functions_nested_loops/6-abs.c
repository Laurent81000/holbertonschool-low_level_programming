#include "main.h"

/**
 * int _abs -  absolute value
 * @_abs: the number to check
 *
 * Description: _abs absolute value is always positive
 * Return: aNumber is the absolute value
 */
int _abs(int aNumber)
{
	if (aNumber < 0)
	{
		aNumber = -aNumber;
	}
	return (aNumber);
}
