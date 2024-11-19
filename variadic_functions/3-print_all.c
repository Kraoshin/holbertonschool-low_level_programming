#include "variadic_functions.h"

/**
 * print_char - print char
 * @args: list of args
 */

void print_char(va_list args)
{
        printf("%c", va_arg(args, int));
}

/**
 * print_int - print char
 * @args: list of args
 */

void print_int(va_list args)
{
        printf("%d", va_arg(args, int));
}

/**
 * print_float - print char
 * @args: list of args
 */

void print_float(va_list args)
{
        printf("%f", va_arg(args, double));
}

/**
 * print_string - print char
 * @args: list of args
 */

void print_string(va_list args)
{
        char *x = va_arg(args, char*);

        if (x == NULL)
{
                printf("(nil)");
                return;
        }
        printf("%s", x);
}

/**
 * print_all - print all type of arg passed in the variadic function
 * @format: the list of types of arg
 */

void print_all(const char * const format, ...)
{
        va_list args;
        char *separator = "";
        int i = 0, j = 0;

        id_t var[] = {
                {"c", print_char},
                {"i", print_int},
                {"f", print_float},
                {"s", print_string},
                {NULL, NULL}
        };

        va_start(args, format);

        while (format && format[i])
        {
                while (var[j].id)
                {
                        if (*var[j].id == format[i])
                        {
                                printf("%s", separator);
                                var[j].f(args);
                                separator = ", ";
                        }
                        j++;
                }
                j = 0;
i++;
        }
        printf("\n");

        va_end(args);
}
