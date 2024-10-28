#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of '_' to be printed
 */

void print_line(int n)
{
	int boucle;

	for (boucle = 0; boucle < n; boucle++)
	{
		if (n <= 0)
			_putchar('\n');

		_putchar('_');
	}
	_putchar('\n');
}
