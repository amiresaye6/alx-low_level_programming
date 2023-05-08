#include "main.h"

/**
* append_text_to_file - a function that appends
* text at the end of a file
* @filename: the file name
* @text_content: is the NULL terminated string
* to add at the end of the file
* Return: 1 on success, -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, res = 0, len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[length])
		len += 1;
	res = write(file, text_content, len);
	if (res == -1)
		return (-1);
	res = close(file);
	if (res == -1)
		return (-1);
	return (1);
}
