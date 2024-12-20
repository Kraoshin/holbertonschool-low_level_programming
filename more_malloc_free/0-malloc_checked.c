#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: how many time we want the type of var memory allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
