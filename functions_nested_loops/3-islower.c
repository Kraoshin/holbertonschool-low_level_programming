#include "main.h"

/**
 * _islower - check if the char is lower or upper case
 * @c : The character to check
 *
 * Return: 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
