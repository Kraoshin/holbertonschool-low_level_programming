#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print name depending on which function is passed as argument
 * @name: the name we want to display
 * @f: the function the name is passed by
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
