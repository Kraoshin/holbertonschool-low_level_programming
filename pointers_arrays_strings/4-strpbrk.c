#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string we're looking in
 * @accept: the set of bytes
 *
 * Return: the sentence from the first encounter of accept bytes, else '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int len, i = 0;

	while (s[i] != '\0')
	{
		for (len = 0; accept[len] != '\0'; len++)
		{
			if (s[i] == accept[len])
				return ((char *)(s + i));
		}
		i++;
	}
	return ('\0');
}
