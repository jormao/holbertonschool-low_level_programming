#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile -  reads text file and prints to the POSIX std output
 * @filename: name of the file to read
 * @letters: number of the letters to print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, fdr = 0, fdw = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fdr = read(fd, buf, letters);
	if (fdr == -1)
	{
		free(buf);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buf, fdr);
	if (fdw == -1 || fdw != fdr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (fdr);
}
