#include "main.h"

/**
 * print_square - function that draws a straight line in the terminal.
 * @size: the number of '_' to be printed
 */

void print_square(int size)
{
	int boucle;
	int space;

	if (size <= 0)
		_putchar('\n');


	else
		for (boucle = 0; boucle < size; boucle++)
		{
			for (space = 1; space < size; space++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
}
