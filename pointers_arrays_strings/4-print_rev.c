#include "main.h"

/**
 * print_rev - print a string
 * @s: pointer to the var that contain the string
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (*s != '\0' || *s == '\0')
	{
		count--;
		if (count >= 0)
		{
			s--;
			_putchar(*s);
		}
		else
		{
			_putchar('\n');
			return;
		}
	}
}
