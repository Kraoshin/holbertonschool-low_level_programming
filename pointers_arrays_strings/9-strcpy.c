#include "main.h"

/**
 * _strcpy - copy a string pointed in a char to a buffer
 * @dest: buffer
 * @src: pointer to the string
 * Return: the buffer with the string copied in it
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a = '\0'];

	return (dest);
}
