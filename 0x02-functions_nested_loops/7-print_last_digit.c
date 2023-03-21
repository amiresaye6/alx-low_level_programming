#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number we want to git the last digit ofi
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	return (n % 10);
}
