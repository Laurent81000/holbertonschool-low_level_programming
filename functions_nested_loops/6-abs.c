#include "main.h"

/**
 * _abs - compute the absolute value of a number
 * @aNumber: the number to compute the absolute value of
 *
 * Return: the absolute value of @aNumber
 */
int _abs(int aNumber)
{
	if (aNumber < 0)
	{
		aNumber = -aNumber;
	}
	return (aNumber);
}
