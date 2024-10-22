#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0
 */

int main(void)
{
	int n;
	int y;

	for (n = 48; n < 58; n++)
	{
		putchar (n);
	}

	for (y = 97; y < 103; y++)
	{
		putchar (y);
	}

	putchar ('\n');

	return (0);
}
