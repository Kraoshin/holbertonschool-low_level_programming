#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of matrix
 * @a: pointer to the mem adress of a int matrix 2d array
 * @size: the size of matrix : (2d array where row = column)
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
