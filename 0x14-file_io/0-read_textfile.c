#include "holberton.h"

/**
* read_textfile - Prints up to a certain
* number of charectars to the standard output.
*
* @filename: Pointer to string of text to be printed.
* @letters: Max number of charectars to print.
*
* Return: Number of charecters printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t length;
	char buff[1024];
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	length = read(fd, buff, letters);
	if (length == -1)
		return (0);

	if ((write(STDOUT_FILENO, buff, length)) == -1)
		return (0);

	close(fd);

	return (length);
}
