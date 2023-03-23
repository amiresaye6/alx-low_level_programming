#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 *@size: the shape of the square.
 * Return: 0 success.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i == size - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');

}
