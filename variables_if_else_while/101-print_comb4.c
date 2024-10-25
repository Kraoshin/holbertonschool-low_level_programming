#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int y;
	int x;
	int i;

	for (y = 0; y < 10; y++)
	{
		for (x = y + 1; x < 10; ++x)
		{
			for (i = x + 1; i < 10; ++i)
			{
				putchar(y + '0');
				putchar(x + '0');
				putchar(i + '0');
				if (y < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
