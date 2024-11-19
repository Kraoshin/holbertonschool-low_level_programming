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
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			char* str = va_arg(args, char*);

			if (i == 0)
				printf("%s", str == NULL ? "(nil)" : str);

			else
				printf("%s%s", (separator ? separator : ""), str == NULL ? "(nil)" : str);
		}

		va_end(args);

		printf("\n");
	}
}
