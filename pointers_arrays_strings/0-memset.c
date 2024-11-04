#include "main.h"

/**
 * _memset - function filling the first n bytes of the memory area
 * pointed by s by const byte c
 * @s: pointer to memory area of a string
 * @b: what we want to replace the first n bytes
 * @n: number of bytes we want to replace
 *
 * Return: the modified str
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
