#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* File descriptor */
	int fd;
	ssize_t len = 0;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/* Open the file for writing, create if it doesn't exist, and append */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		while (text_content[len] != '\0')
			len++;

		/* Write content to the file */
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close(fd);

	return (1);
}
