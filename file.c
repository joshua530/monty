#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#include "monty.h"

/**
 * open_file - opens a file
 *
 * @filename: name of file
 *
 * Return: file descriptor if file exists, -1 if it doesn't
 */
int open_file(char *filename)
{
	int fd = open(filename, O_RDONLY);
	return (fd);
}

/**
 * file_size - fetches file size in bytes
 *
 * @fd: file descriptor
 *
 * Return: file size in bytes
 */
int file_size(int fd)
{
	struct stat s;

	if (fstat(fd, &s) == -1)
	{
		return (-1);
	}

	return (s.st_size);
}

/**
 * read_file - reads input from a file
 *
 * @filename: name of file
 *
 * Return: file contents or NULL if file doesn't exist or error
 * occured while reading file
 */
char *read_file(char *filename)
{
	char *file_contents;
	int size;
	int fd = open_file(filename);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	size = file_size(fd);

	file_contents = malloc(size);
	if (file_contents == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	read(fd, file_contents, size);
	return (file_contents);
}
