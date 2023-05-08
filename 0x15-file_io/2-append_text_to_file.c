#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer string
 *
 * Return: length of the string(int);
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - function appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t l;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
		l = write(f, text_content, _strlen(text_content));
	close(f);
	if (l == -1)
		return (-1);
	return (1);
}
