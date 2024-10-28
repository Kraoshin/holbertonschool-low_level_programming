#include "main.h"

/**
 * _isdigit - return 1 if its a digit
 *
 * Return: 1 if its a digit 0 otherwise
 * @c: the char you want to check
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
