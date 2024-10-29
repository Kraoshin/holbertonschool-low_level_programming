#include "main.h"

/**
 * print_rev - print a string
 * @s: pointer to the var that contain the string
 */

void print_rev(char *s)
{
	int count = 0, b;

	while (s[count] != '\0')
	{
		count++;
	}
	b = (count - 1);

	while (b > 0)
	{
		_putchar(s[b]);
		b--;
	}	
}
