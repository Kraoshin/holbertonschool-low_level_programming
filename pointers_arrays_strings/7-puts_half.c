#include "main.h"

/**
 * puts_half - print a string starting from the middle
 * @str: the string you want to print
 */

void puts_half(char *str)
{
	int count = 0, n = 0;

	while (str[count] != '\0')
		count++;

	n = (count / 2);

	if (count % 2 == 0)
	{
		while (n < count)
		{
			_putchar(str[n]);
			n++;
		}
	}

	else
	{
		n = n + 1;
		while (n < count)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
