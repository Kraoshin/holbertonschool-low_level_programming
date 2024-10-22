#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 101 || n == 113)
		{
			continue;
		}
		putchar (n);
	}

	putchar ('\n');

	return (0);
}
