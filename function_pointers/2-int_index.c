#include "function_pointers.h"

/**
 * int_index - searche for an int
 * @array: array of int you're searching in
 * @size: the number of elements in the array
 * @cmp: pointer to a function
 *
 * Return: the index of the first elem for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		i++;

		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
