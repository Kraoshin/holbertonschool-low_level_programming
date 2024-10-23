#include "main.h"

/**
 * _isalpha - check if c is a char lower or uper
 * @c: The character to check
 *
 * Return: On success 1.
 * Otherwise, 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
