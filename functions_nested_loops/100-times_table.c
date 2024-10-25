#include "main.h"

/**
 * _printf - print number using _putchar from 0 to 999.
 * @a: multiplicator
 * @b: multiplicated
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
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: the times table you want to display
 */

void print_times_table(int n)
{
	int a, b, i;

	if (n < 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				i = (a * b);

				if (b > 0 && i >= 100)
				{
					_putchar(' ');
					_putchar(',');
					_printf(a, b);
				}
				if (b > 0 && i >= 10 && i < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(',');
					_printf(a, b);
				}
				if (b > 0 && i <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(',');
					_printf(a, b);
				}
				if (b == 0)
					_printf(a, b);

			}
			_putchar ('\n');
		}
	}
}
