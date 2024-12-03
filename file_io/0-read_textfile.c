#include "main.h"

/**
 * read_textfile - open & read a textfile to save char in a buffer and print
 * in the stdout the text file
 *
 * @filename: pointer to the mem adress of the file
 * @letters: the number of letters/byte we will allocate the buffer with
 *
 * Return: 0 if any operation fail, the number of printed letters otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_o;
	ssize_t read_b, write_b;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f_o = open(filename, O_RDONLY);
	if (f_o == -1)
	{
		free(buffer);
		return (0);
	}

	read_b = read(f_o, buffer, letters);
	if (read_b == -1)
	{
		free(buffer);
		close(f_o);
	return (0);
	}

	write_b = write(STDOUT_FILENO, buffer, read_b);
	if (write_b == -1 || write_b != read_b)
	{
		free(buffer);
		close(f_o);
		return (0);
	}

	free(buffer);
	close(f_o);

	return (write_b);
}
