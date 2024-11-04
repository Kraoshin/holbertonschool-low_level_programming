#include "main.h"

/**
 * _strchr - locates a char in a str
 * @s: the str to check
 * @c: the char to find in the str
 *
 * Return: a pointer to the first occurrence of the character or NULL if !char
 */

char *_strchr(char *s, char c)
{
	char a;
	int i;

	a = c;
	i = 0;

	while (s[i] != '\0' && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *)(s + i));
	else if (s[i] == '\0')
		return ((char *)(s + i));

	return ('\0');
}
