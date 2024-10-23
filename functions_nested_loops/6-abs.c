#include "main.h"

/**
 * _abs - transform a number into his absolute value
 * @a : The character to check
 *
 * Return: 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
		return (a);
	}

	else
	{
		a = (1) * a;
		return (a);
	}
}
