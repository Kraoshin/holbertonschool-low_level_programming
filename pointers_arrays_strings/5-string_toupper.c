#include "main.h"

/**
 * string_toupper - tr lower case in upper case
 * @str: the str to tr
 *
 * Return: the tr str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
