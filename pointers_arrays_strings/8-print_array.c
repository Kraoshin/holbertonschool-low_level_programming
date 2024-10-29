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

	if (n == 0)
		printf("%d\n", *a);
	if (n > 0)
		return;
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", *a);
				a++;
			}
			if (i == n - 1)
				printf("%d\n", *a);
		}
	}
}
