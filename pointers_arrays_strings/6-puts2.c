#include "main.h"

/**
 * puts2 - function that prints every 2 char of a string starting from the 1st
 * @str: the string to reverse
 */

void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
			_putchar(*str);
		count++;
		str++;
	}
	_putchar('\n');
}
