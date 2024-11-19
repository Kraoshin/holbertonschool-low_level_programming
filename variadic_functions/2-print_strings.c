#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: char to print between each str
 * @n: number of arg
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	{
		unsigned int i;
		char *str;

		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char*);

			if (!separator)
				printf("%s", str);

			else if (i == 0 && separator)
				printf("%s", str);

			else
				printf("%s%s", separator, str);
		}

		printf("\n");

		va_end(args);
	}
}
