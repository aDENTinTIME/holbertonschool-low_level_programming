#include "holberton.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: String of chars of 0 and 1s.
*
* Return: Base 10 unsigned int of value of binary.
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
