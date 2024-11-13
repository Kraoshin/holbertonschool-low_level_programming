#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - allocate space for concatenate 2 str
 * @s1: begining of the str
 * @s2: follows what's written in s1
 * @n: number of bytes from s2 to be concatenate
 *
 * Return: NULL if not enough space, the allocated mem otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0' && j < n)
		j++;

	concat = malloc(i + j + 1);

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	for (k = 0; k < j; k++)
		concat[i + k] = s2[k];

	concat[i + j] = '\0';

	return (concat);
}
