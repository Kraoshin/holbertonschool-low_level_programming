#include "main.h"

/**
 * _strlen - count the length of a string
 * @s:  the pointer to the variable that countain the string
 *
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
