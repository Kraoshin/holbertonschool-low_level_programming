#include "main.h"

/**
 * cap_string - function that capitalizes all words of a str
 * @str: the str to capitalizes
 *
 * Return: the capitalized str
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char spe[13] = " ,;.!?\"(){}\t\n";

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == spe[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
