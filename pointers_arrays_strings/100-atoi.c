#include "main.h"

/**
 * _atoi - convert str in int
 * @s: the strg to convert
 * Return: the convert str
 */

int _atoi(char *s)
{
	int i = 0, neg = 1;
	unsigned int res = 0;

	while ((s[i] >= 9 && s[i] <= 13)
			|| s[i] == ' ' || s[i] == '+' || s[i] == '-'
			|| (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		if (s[i] == '-')
			neg = (neg * -1);
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * neg);
}
