#include "main.h"

/**
 * print_sign  - check if the number is positive negative or equal to 0
 * @n : The number to check
 *
 * Return: On positive number 1.
 * 0 if its 0
 * -1 if its less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}


	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}


	else
	{
		_putchar(45);
		return (-1);
	}
	
}
