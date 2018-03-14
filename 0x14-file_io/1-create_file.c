#include "holberton.h"

/**
* create_file - Creates a file with text.
*
* @filename: Pointer to string of text for the files name.
* @text_content: Pointer to string of text to put in file.
*
* Return: 1 on success or -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	unsigned int fd, length;

	length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 00600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd)
		return (1);
	}

	while (text_content[length++])
	{
	}

	if ((write(fd, text_content, (length - 1))) == -1)
		return (-1);

	close(fd);

	return (1);
}
