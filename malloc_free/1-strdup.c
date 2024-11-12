#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to a new alloc space of memory pointing to a copy of a str
 * @str: the string we want to copy
 *
 * Return: the copied str if enough space, NULL otherwise
 */

char *_strdup(char *str)
{
	char *array;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	array = malloc(len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		array[i] = str[i];

	return (array);
}
