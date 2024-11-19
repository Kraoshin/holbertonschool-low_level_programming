#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all element
 * @n: the number of element to sum
 *
 * Return: 0 if n == 0 else the sum of elem
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}
	va_end(args);

	return (s);
}
