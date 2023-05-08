#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: the file name
 * @letters: the number of letters (int)
 *
 * Return: the actual number of letters it could read and print || 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _read, _write, _open;
	char *b;

	if (!filename)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);
	_open = open(filename, O_RDONLY);
	_read = read(_open, b, letters);
	_write = write(STDOUT_FILENO, b, _read);

	if (_read == -1 || _open == -1 || _write == -1 || _read != _write)
	{
		free(b);
		return (0);
	}
	free(b);
	close(_open);
	return (_write);

}
