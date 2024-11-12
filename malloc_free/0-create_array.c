#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: the size of the array
 * @c: the char you want to initialize the array with
 *
 * Return: the created array if no problem, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for ( ; i < size; i++)
		array[i] = c;

	return (array);
}
