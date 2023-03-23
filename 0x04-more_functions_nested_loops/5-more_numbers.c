#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((i / 10) + '0');
			if (i < 10)
			{
				continue;
			}
			else
			{
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
