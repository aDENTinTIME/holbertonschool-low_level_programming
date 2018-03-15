#include "holberton.h"

/**
* main - Copies the contents of one file to a new file.
*
* @ac: Number of arguments passed to program.
* @av: Array of variables, names of file to read from, and new file.
*
* Return: 0 on success. Exit on error.
*/

int main(int ac, char **av)
{
	char buff[1024];
	int file_from, file_to, length;

	if (ac != 3)
		ERROR1(97, "Usage: cp file_from file_to");

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		ERROR2(98, "Error: Can't read from file", av[1]);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (file_to == -1)
		ERROR2(99, "Error: Can't write to", av[2]);

	while ((length = read(file_from, buff, 1024)))
	{
		if ((write(file_to, buff, length)) == -1)
			ERROR2(98, "Error: Can't read from file", av[1]);
	}

	if (length == -1)
		ERROR2(98, "Error: Can't read from file", av[1]);
	if (close(file_from) == -1)
		ERROR3(100, "Error: Can't close fd", file_from);
	if (close(file_to) == -1)
		ERROR3(100, "Error: Can't close fd", file_to);

	return (0);
}
