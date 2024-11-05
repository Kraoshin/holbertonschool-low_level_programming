#include "main.h"

/**
 * _sqrt - calculate the square of a n number
 * @num: num = n
 * @root: the number + 1 until root * root = n
 *
 * Return: root
 */
int _sqrt(int num, int root)
{
	if ((root * root) > num)
		return (-1);
	else if ((root * root) == num)
		return (root);
	else
		return (_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - go into the _sqrt to calc only if n > 0
 * @n: the number you want to know the square root
 *
 * Return: -1 if n < 0 else goes inside _sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
