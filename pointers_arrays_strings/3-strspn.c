#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the str to check
 * @accept: list of char you're looking to count in s
 *
 * Return: the count of char in accept you encounter in s until you dont
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, k, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (counter != i)
			break;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				counter++;
		}
	}
	return (counter);
}
