#include <stdio.h>
#include <stdlib.h>

/**
 * change - calc the number of coins to make change
 * @num: the value you want to calc the change
 *
 * Return: always 0
 */

int change(int num)
{
	int c1 = 1, c2 = 2, c3 = 5, c4 = 10, c5 = 25, sum = 0;

	while (1)
	{
		if (num >= c5)
		{
			num -= c5;
			sum++;
		}
		else if (num >= c4)
		{
			num -= c4;
			sum++;
		}
		else if (num >= c3)
		{
			num -= c3;
			sum++;
		}
		else if (num >= c2)
		{
			num -= c2;
			sum++;
		}
		else if (num >= c1)
		{
			num -= c1;
			sum++;
		}
		else
		{
			printf("%d\n", sum);
			return (0);
		}
	}
}

/**
 * main - entry point
 * @argc: count the number of arg
 * @argv: countains the arg
 *
 * Return: 1 if argc != 2 otherwise the fonction change
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	else
		return (change(num));
}
