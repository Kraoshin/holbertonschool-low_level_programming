#include "main.h"

/**
 * primechecker - calculate if n is a prime num
 * @n: the num you want to check
 * @i: le num par lequel on div n pour savoir si n est div par autre que lui
 *
 * Return: itself to divide n with i + 1 (i is 2 at first iteration)
 */
int primechecker(int n, int i)
{
	if (n % i == 0)
		return (0);

	else if (i * i > n)
		return (1);

	else
		return (primechecker(n, i + 1));
}
/**
 * is_prime_number - goes in primechecker function if n is <= to 1 or not 2
 * @n: the number you want to check
 *
 * Return: 0 if not a prime number 1 if it is
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if (n == 2)
		return (1);
	else
		return (primechecker(n, 2));
}
