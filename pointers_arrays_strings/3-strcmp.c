#include "main.h"

/**
 * _strcmp - function that compare two str
 * @s1: first str to be compared
 * @s2: second str to be compared
 *
 * Return: value depending of the comparison, 1 if there's an error
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;

	return (s1[i] - s2[i]);
}
