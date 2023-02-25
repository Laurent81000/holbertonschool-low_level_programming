#include "main.h"

/**
 * int _abs -  absolute value
 * @c: the number to check
 *
 * Description: absolute value is always positive
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