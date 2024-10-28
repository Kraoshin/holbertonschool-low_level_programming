#include "main.h"

/**
 * print_triangle - function that draws a straight line in the terminal.
 * @size: the number of '\' to be printed
 */

void print_triangle(int size)
{
	int vertical;
	int horizontal;

	if (size <= 0)
		_putchar('\n');


	else
	{
		for (vertical = size; vertical > 0; vertical--)
		{
			for (horizontal = 0; horizontal < vertical; horizontal++)
				_putchar(' ');
			for (horizontal = size; horizontal > vertical; horizontal --)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}	
}
