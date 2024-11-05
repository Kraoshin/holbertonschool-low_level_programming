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
	unsigned int count = 0;
	int len, i = 0;

	for (len = 0; accept[len] != '\0'; len++)
	{
		if (s[i] == accept[len])
		{
			count++;
			i++;
			len = 0;
		}
	}
	if (count == 0 || s[i] == '\0')
		return (count);
	else
		return (count + 1);
}
