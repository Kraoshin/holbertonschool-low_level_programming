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

	for (x = 0; x < 10; ++x)
	{
		for (i = x + 1; i < 10; ++i)
		{
			putchar(x + '0');
			putchar(i + '0');
			if (x < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
