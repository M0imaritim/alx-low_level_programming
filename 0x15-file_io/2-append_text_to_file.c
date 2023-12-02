#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);
	written = write(fildes, text_content, strlen(text_content));
	if (written == -1)
	{
		close(fildes);
		return (-1);
	}
	close(fildes);
	return (1);
}
