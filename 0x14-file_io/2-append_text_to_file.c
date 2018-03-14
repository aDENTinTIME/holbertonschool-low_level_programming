#include "holberton.h"

/**
* append_text_to_file - Appends a text at the end of a file.
*
* @filename: Pointer to string of text for the files name.
* @text_content: Pointer to string of text to put in file.
*
* Return: 1 on success or -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;

	length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[length++])
	{
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if ((write(fd, text_content, (length - 1))) == -1)
		return (-1);

	close(fd);

	return (1);
}
