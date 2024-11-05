#include "main.h"

/**
 * _pow_recursion - calculate x * x y times
 * @x: the number to multiply y times
 * @y: the number to multiply n by itself
 *
 * Return: if y == 0 (1) if y < 0 (-1) otherwise x * x y times
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	else
		return (x * _pow_recursion(x, y - 1));
}
