#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: nombre that you're looking to print the last digit
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
	n = (n % 10);
	_putchar('0' + n);
	}

	else
	{
		n = ((n * -1) % 10);
		_putchar('0' + n);
	}
	return (n);
}

