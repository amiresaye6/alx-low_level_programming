#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new lin
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
