#include <stdio.h>

/**
 * main - entry point
 * @argc: the count of arguments
 * @argv: unused but has to use to bc of gcc flags
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
