#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0
 */

int main(void)
{
	int n;
	int y;

	for (n = 97; n < 123; n++)
	{
		putchar (n);
	}

	for (y = 65; y < 91; y++)
	{
		putchar (y);
	}

	putchar ('\n');

	return (0);
}
