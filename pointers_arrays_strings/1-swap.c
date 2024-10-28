#include "main.h"

/**
 * swap_int - swap the value of the int stored inside the pointer
 *
 * @a: first value to swap
 * @b: second value to swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
