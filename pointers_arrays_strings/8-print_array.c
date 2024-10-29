#include "main.h"
#include <stdio.h>

/**
 * print_array - print all elements of an array of int
 * @a: the name of the int array
 * @n: the number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
		printf("%d, ", *a);
		a++;
		}

		if (i == n - 1 || i == n)
		{
			printf("%d", *a);
			printf("\n");
		}
	}
}
