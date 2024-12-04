#include "main.h"

/**
 * create_buffer - create a buffer of n bytes
 *
 * @file: The name of the file the buffer is saving bytes for.
 *
 * Return: A pointer to the allocated mem
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors
 * @f_o: The file descriptor who will be  closed
 */

void close_file(int f_o)
{
	int cls;

	cls = close(f_o);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_o);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: The number of arguments passed in the program
 * @argv: An array of pointers containing the arguments
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int origin, dest, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	origin = open(argv[1], O_RDONLY);

	if (origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	r = read(origin, buffer, BUF_SIZE);
	while (r > 0)
	{
		w = write(dest, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(origin, buffer, BUF_SIZE);
	}
	free(buffer);
	close_file(origin);
	close_file(dest);
	return (0);
}
