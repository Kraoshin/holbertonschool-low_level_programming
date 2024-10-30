#include "main.h"

/**
 * _strncat - concatenate 2 string depending of a n value of bytes
 * @dest: the concatenate str
 * @src: the str to concatenate
 * @n: the number of byte allowed from the src
 *
 * Return: the concatenate sentence
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
