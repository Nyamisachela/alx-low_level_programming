#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file with specified permissions and writes content.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	/* File descriptor */
	int fd;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/* Create or open the file with read-write permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Write content to the file if provided */
	if (text_content != NULL)
	{
		ssize_t len = 0;

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
