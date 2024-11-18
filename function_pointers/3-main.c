#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the number of arg passed
 * @argv: str containing each arg passed
 *
 * Return: The result or Error
 */

int main(int argc, char *argv[])
{
	int a, b, calc;
	char c;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2][0];

	if (c != 43 && c != 45 && c != 42 && c != 47 && c != 37)
	{
		printf("Error\n");
		exit(99);
	}

	if ((a == 0 || b == 0) && (c == 47 || c == 37))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(argv[2])(a, b);

	printf("%d\n", calc);

	return (0);
}
