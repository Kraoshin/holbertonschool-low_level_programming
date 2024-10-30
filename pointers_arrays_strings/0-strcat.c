#include "main.h"

/**
 * _strcat - concatenates 2 str
 * @dest: the str that receive the src
 * @src: the str that goes inside the dest
 *
 * Return: the dest char concatenate or not
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
