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
	int i = 0, j = 0;

	while (haystack[j] != '\0' && needle[i] != '\0')
	{
		if (needle[i] != haystack[j])
		{
			j++;
			i = 0;
		}
		else
		{
			i++;
			j++;
		}
	}
	if (needle[i] == '\0')
		return ((char *)((haystack + j) - i));

	else
		return ((char *)(haystack + j));
}
