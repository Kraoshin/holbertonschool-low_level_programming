#include "main.h"

/**
 * print_chessboard - print the chessboard.
 * @a: pointer to the memory adress that countains the chessboard array
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}

		_putchar('\n');
	}
}
