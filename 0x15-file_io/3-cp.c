#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_error - Print error message and exit with the given status code.
 * @status: The exit status code.
 * @format: The error message format.
 */
void exit_with_error(int status, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(status);
}

/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t red, written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to\n");
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		exit_with_error(98, "Error: Can't read from file %s\n",
				argv[1]);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		exit_with_error(99, "Error: Can't write to file %s\n", argv[2]);
	red = 1024;
	while (red == 1024)
	{
		red = read(from_fd, buffer, BUFFER_SIZE);
		if (red == -1)
			exit_with_error(98, "Error: Can't read from file %s\n",
					argv[1]);
		written = write(to_fd, buffer, red);
		if (written == -1 || written != red)
			exit_with_error(99, "Error: Can't write to file %s\n",
					argv[2]);
	}
	if (close(from_fd) == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", from_fd);
	if (close(to_fd) == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", to_fd);

	return (0);
}
