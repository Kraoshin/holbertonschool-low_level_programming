#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - struct containing pointer and func pointer
 * @op: pointer pointing to a char
 * @f: fonction pointer
 *
 * Structure that takes n element of char to compare with a char in a str
 * and then execute the right function through the function pointer
 */

typedef struct op
{
	char *op;
	void (*f)(va_list args);

} get_op;
#endif
