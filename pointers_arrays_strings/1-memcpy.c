#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: pointer to memory adress of a sentence to be modified
 * @src: pointer to memory adress of a sentence to modify dest
 * @n: number of bytes to copy
 *
 * Return: modified dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
