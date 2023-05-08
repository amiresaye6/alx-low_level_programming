#include "main.h"

/**
 * checker97 - checks for correct number
 *
 * @a: number of args
 *
 * Return: void
 */

void checker97(int a)
{
	if (a != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * checker98 - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @from: file descriptor of file_from, || -1
 * @to: file descriptor of file_to, || -1
 *
 * Return: void
 */

void checker98(ssize_t check, char *file, int from, int to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file);
		if (from != -1)
			close(from);
		if (to != -1)
			close(to);
		exit(98);
	}
}

/**
 * checker99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @from: file descriptor of file_from, or -1
 * @to: file descriptor of file_to, or -1
 *
 * Return: void
 */

void checker99(ssize_t check, char *file, int from, int to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (from != -1)
			close(from);
		if (to != -1)
			close(to);
		exit(99);
	}
}

/**
 * checker100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */

void checker100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	checker97(argc);
	from = open(argv[1], O_RDONLY);
	checker98((ssize_t)from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	checker99((ssize_t)to, argv[2], from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(from, buffer, 1024);
		checker98(lenr, argv[1], from, to);
		lenw = write(to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		checker99(lenw, argv[2], from, to);
	}
	close_to = close(to);
	close_from = close(from);
	checker100(close_to, to);
	checker100(close_from, from);
	return (0);
}
