#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: char to print between numbers
 * @n: the number of arg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (i == 0)
			printf("%d", num);

		else
			printf("%s%d", separator ? separator : "", num);
	}

	va_end(args);

	printf("\n");
}
