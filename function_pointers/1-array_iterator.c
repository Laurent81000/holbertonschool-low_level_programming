#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function to iterate each element of an array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action) /* Check for valid input */
	{
		for (x = 0; x < size; x++) /* Loop on on each element of an array */
			{
				action(array[x]); /* Calling the function pointer */
			}
	}
}
