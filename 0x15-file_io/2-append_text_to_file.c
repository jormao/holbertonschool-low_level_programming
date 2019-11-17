#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - add text to end of the file
 * @filename: name of the file
 * @text_content: text to add
 *
 * Return: 1 on success or -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, fdw = 0, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[count] != '\0')
	{
		count++;
	}
	fdw = write(fd, text_content, count);
	if (fdw == -1)
		return (-1);
	close(fd);
	return (1);
}
