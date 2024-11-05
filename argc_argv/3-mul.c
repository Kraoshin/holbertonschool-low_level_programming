#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: the count of arguments
 * @argv: the number we want to multiply
 *
 * Return: if there's < 2 number 1 else 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		sum = sum * x;
	}

	printf("%d\n", sum);

	return (0);
}
