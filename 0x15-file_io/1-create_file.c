#include "main.h"

/**
 * create_file -  a function that creates a file.
 *
 * @filename: the file to read from
 * @text_content: the content to read
 *
 * Return: 1 || 0
 */

int create_file(const char *filename, char *text_content)
{
	int _open, _write, length = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[length])
			length++;
	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(_open, text_content, length);

	if (_open == -1 || _write == -1)
		return (-1);
	close(_open);
	return (1);
}
