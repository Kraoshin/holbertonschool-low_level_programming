#include "main.h"

/**
 * times_table _ print the 9 times tables starting with 0
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int r = (a * b);

			if (r >= 10 && b != 9)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				_putchar(44);
				_putchar(32);
			}

			if (r < 10 && b != 9)
			{
				_putchar(r + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}

			if (b == 9 && r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				_putchar('\n');
			}
			if (b == 9 && r < 10)
			{
				_putchar(r + '0');
				_putchar('\n');
			}
		}
	}
}
