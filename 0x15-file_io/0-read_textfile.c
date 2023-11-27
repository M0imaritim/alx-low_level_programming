#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 on failure or if the file cannot be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buf;
	ssize_t red, written;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	red = read(file_descriptor, buf, letters);
	if (red == -1)
	{
		free(buf);
		close(file_descriptor);
		return (0);
	}
	written = write(STDOUT_FILENO, buf, red);
	if (written == -1 || written != red)
	{
		free(buf);
		close(file_descriptor);
		return (0);
	}
	free(buf);
	close(file_descriptor);

	return (written);
}
