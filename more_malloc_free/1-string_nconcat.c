#include "main.h"
#include <stdlib.h>

/**
 * _strlen - the strlen function rewrite
 * @str: the str we want to count the len
 *
 * Return: the length of the str
 */

unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _malloc - allocate space for s1 + n bytes
 * @s1: the dest
 * @s2: the src
 * @n: number of bytes we want from s2
 *
 * Return: if empty or not enough space NULL otherwise the allocate mem
 */

char *_malloc(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		mem = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		mem = malloc(sizeof(char) * (len1 + n + 1));
	if (mem == NULL)
		return (NULL);
	return (mem);
}

/**
 * string_nconcat - concat n s2 bytes in s1
 * @s1: the dest
 * @s2: the src
 * @n: the number of bytes from s2 to be concatenate
 *
 * Return: if empty or not enough space NULL otherwise the concatenate str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *mem, *temp;

	mem = _malloc(s1, s2, n);

	temp = mem;

	for (i = 0; s1[i] != '\0'; i++)
	{
		*temp = s1[i];
		temp++;
	}
	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		*temp = s2[i];
		temp++;
	}

	*temp = '\0';

	return (mem);
}
