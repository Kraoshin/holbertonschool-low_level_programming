#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the str you're counting its len
 *
 * Return: 0 if str is at \0 otherwise 1 + itself + 1
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
