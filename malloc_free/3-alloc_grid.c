#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: the width of each height of the grid
 * @height: the height of the grid
 *
 * Return: NULL if allocation fail somewhere or if w or h are <= 0 else grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);

			free(matrix);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
