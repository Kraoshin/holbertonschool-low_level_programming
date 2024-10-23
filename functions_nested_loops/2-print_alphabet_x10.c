#include "main.h"

/**
 * print_alphabet_x10 - print alphabet low cases 10 time
 */

void print_alphabet_x10(void)
{
	int n;
	int o;

	for (o = 0; o < 10; o++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar (n);
		}

	_putchar ('\n');
	}

}
