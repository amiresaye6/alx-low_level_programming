#include "main.h"

/**
 * print_numbers - prints from 0 to 9 but dont print 2 or 4
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
