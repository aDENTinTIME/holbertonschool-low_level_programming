#include "holberton.h"

int len(char *s)
{
	int i = 0;

	while (s[i++])

	return (i - 1)
}


/**
* copy_file
*
* @filename: Pointer to string of text for the files name.
* @text_content: Pointer to string of text to put in file.
*
* Return: 1 on success or -1 on failure.
*/

int copy_file(int ac, char *av[])
{
	int fd, length;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
// clear out junk, add comment description of 'len'

	length = 0;

//	if (filename == NULL)
//		return (-1);

//	if (text_content == NULL)
//		text_content = "";

	fd = open(av[1], O_RDWR | O_CREAT, 00600);
	if (fd == -1)
		return (-1);

	if ((write(fd, av[2], (length - 1))) == -1)
		return (-1);

	close(fd);

	return (1);
}
