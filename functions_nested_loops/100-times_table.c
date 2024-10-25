#include "main.h"

/**
 *
 *
 */

void _printf(int a, int b)
{
	int r;

	r = (a * b);

	if (r >= 100)
	{
		_putchar((r / 100) + '0');
		_putchar(((r / 10) % 10) + '0');
	}
	if (r >= 10 && r < 100)
		_putchar((r / 10) + '0');
	_putchar((r % 10) + '0');
}

void print_times_table(int n)
{
	int a, b, i;

	if (n < 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				i = (a * b);
				_printf(a, b);

				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (b != n && i < 100)
					_putchar(' ');

				if (b != n && i < 10)
					_putchar(' ');

			}
			_putchar ('\n');
		}
	}
}
