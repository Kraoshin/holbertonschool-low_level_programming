#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string you're looking substring in
 * @needle: substring you're looking in string
 *
 * Return: pointer to the beginning of the located substring, or '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	b = needle;

	if (*b == 0)
		return ((char *) haystack);

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
			continue;

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return ('\0');
}
