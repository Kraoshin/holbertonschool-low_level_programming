#include "main.h"

/**
 * times_table - print the 9 times tables starting with 0
 */

void times_table(void)
{
	int a, b, r;
	int tens, units;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			r = (a * b);
			tens = r / 10;
			units = r % 10;

			if (r >= 10)
				_putchar(tens + '0');
			else if (b > 0)
				_putchar(' ');

			_putchar(units + '0');

			if (b < 9)
			{
				_putchar (',');
				_putchar(' ');
			}

		}
		_putchar ('\n');
	}
}
