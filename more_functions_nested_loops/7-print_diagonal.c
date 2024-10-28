#include "main.h"

/**
 * print_diagonal - function that draws a straight line in the terminal.
 * @n: the number of '\' to be printed
 */

void print_diagonal(int n)
{
	int boucle;
	int space;

	if (n <= 0)
		_putchar('\n');


	else
		for (boucle = 0; boucle < n; boucle++)
		{
			for (space = 0; space < boucle; space++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
}
