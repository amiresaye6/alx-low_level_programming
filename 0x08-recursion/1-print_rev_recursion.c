#include "main.h"

/**
 * _puts_rev_recursion - a function that prints a string,
 * followed by a new lin
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
