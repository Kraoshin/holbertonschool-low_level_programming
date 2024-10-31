#include "main.h"

/**
 * leet - encode a str into 1337
 * @s: the str to encode
 *
 * Return: the encoded str
 */

char *leet(char *s)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4', '3', '0', '7', '1'};
	int length = 0, index;

	while (s[length] != '\0')
	{
		for (index = 0; numbers[index] != '\0'; index++)
		{
			if (s[length] == letters[index] || s[length] == letters[index - 32])
				s[length] = numbers[index];
		}
		length++;
	}
	return (s);
}
