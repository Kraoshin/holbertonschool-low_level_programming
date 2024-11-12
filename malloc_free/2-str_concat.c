#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - the strlen function rewrite
 * @str: the str we want to count the len
 *
 * Return: the length of the str
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * str_concat - concat 2 str
 * @s1: the dest
 * @s2: the src
 *
 * Return: if empty or not enough space NULL otherwise the concatenate str
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	char *mem, *temp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len = _strlen(s1) + _strlen(s2);

	mem = malloc(len + 1);

	if (mem == NULL)
		return (NULL);

	temp = mem;

	while (*s1 != '\0')
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*temp = *s2;
		temp++;
		s2++;
	}

	*temp = '\0';

	return (mem);
}
