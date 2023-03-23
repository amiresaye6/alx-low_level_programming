#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on
 *  the terminal.
 *@n: the length of the diagonal line.
 * Return: 0 success.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i == n - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}
