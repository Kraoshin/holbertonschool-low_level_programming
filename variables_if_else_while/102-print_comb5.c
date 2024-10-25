#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int i;

	for (x = 0; x < 100; ++x)
	{
		for (i = x + 1; i < 100; ++i)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (x < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
