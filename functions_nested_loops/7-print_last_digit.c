#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: nombre that you're looking to print the last digit
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}

	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}

	_putchar('0' + a);

	return (a);
}

