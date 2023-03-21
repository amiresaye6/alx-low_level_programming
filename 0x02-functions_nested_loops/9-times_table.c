#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			if (j == 9)
				continue;
			_putchar(',');
			if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
