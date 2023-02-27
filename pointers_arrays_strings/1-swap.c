#include "main.h"

/**
 * swap_int -  function to change 2 integer
 * @temporary: temporary variable
 *
 * Description: swaps the values of two integers
 * Return: 0
 */
void swap_int(int *a, int *b) 
{
	int temporary = *a;
	*a = *b;
	*b = temporary;
}
