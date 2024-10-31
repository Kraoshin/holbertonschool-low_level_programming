#include "main.h"

/**
 * _strncpy - copy the src str into the dest
 * @dest: the copied str
 * @src: the str to be copied
 * @n: the max number of bytes to be copied
 *
 * Return: the copied str
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
