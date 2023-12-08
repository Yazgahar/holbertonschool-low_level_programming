#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: size of text
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read, write;
	char *buffer;

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	read = read(fd, buffer, letters);
	write = write(STDOUT_FILENO, buffer, read);

	if (fd == -1 || read == -1 || write != read)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (write);
}
