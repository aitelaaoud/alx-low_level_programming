#include "main.h"

/**
 * create_file - creates a file
 * @filename: name if the file to create
 * @text_content: string to write to filename
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, num_w = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_EXCL | O_CREAT, 0600);
	if (fd == -1)
	{
		if (errno == EEXIST)
			fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
		else
			return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		num_w = write(fd, text_content, len);
	}

	if (num_w != len || close(fd) == -1)
		return (-1);
	return (1);
}
