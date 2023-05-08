#include "main.h"


/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}


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
	ssize_t len;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
		len = write(file, text_content, _strlen(text_content));
	close(file);
	if (len == -1)
		return (-1);
	return (-1);
}
