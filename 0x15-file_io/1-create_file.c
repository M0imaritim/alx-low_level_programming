#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file (NULL creates an empty file)
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fildes;
	int chars;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fildes = open(filename, O_WRONLY | O_TRUNC | O_EXCL, 0600);
	if (fildes == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (chars = 0; text_content[chars]; chars++)
		;
	written = write(fildes, text_content, chars);
	if (written == -1)
	{
		close(fildes);
		return (-1);
	}
	close(fildes);
	return (1);
}
