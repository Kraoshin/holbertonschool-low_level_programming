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
	int count1 = 0, count2 = 0;

	while (s1[count1] != '\0')
		count1++;

	while (s2[count2] != '\0')
		count2++;

	if (count1 == count2)
		return (0);

	else if (count1 < count2)
		return (15 * -1);

	else if (count1 > count2)
		return (15);

	return (1);
}
