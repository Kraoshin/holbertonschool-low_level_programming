#include "main.h"

/**
 * create_file - create a file if it doesn't exist or truncate it otherwise,
 * then write text inside text_content in it
 *
 * @filename: the name of the created/truncated file
 * @text_content: what we want to write inside the file
 *
 * Return: -1 if any operation fail, 1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int f_o, numl = 0, permissions;

	if (!filename)
		return (-1);

	f_o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_o == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[numl])
			numl++;

		permissions = write(f_o, text_content, numl);

		if (permissions == -1)
		{
			close(f_o);
			return (-1);
		}
	}

	close(f_o);
	return (1);
}
