#include "main.h"

/**
 * create_file - creates a file with the given filename
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, | O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
