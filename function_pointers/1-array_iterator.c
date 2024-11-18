#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter.
 * @array: array of int to display
 * @size: how many element of array to display
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if ((array) && (size) && (action))

		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
