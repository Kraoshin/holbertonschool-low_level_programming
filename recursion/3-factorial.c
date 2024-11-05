#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number to calculate
 *
 * Return: -1 if n < 0, 1 if n == 0 otherwise n * n - 1
 */

int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));

	else if (n == 0)
		return (1);

	else
		return (-1);
}
