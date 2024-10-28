#include "main.h"

/**
 * _isupper - return 1 if its a uppercase char
 *
 * Return: 1 if its uppercase 0 otherwise
 * @c: the char you want to check
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
