#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: the file to open
 * @text_content: the content to append
 *
 * Return: 1 || -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len, size = 0;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	while (text_content[size])
		size++;
	if (text_content)
		len = write(file, text_content, size);
	close(file);
	if (len == -1)
		return (-1);
	return (-1);
}
