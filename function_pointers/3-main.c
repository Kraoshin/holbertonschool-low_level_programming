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
	int a, b;
	int (*c)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = get_op_func(argv[2]);

	if (c == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", c(a, b));

	return (0);
}
