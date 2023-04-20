#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string
 * @n: int
 * @...: the intgs to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (i--)
		printf("%d%s", va_arg(list, int),
				i ? (separator ? separator : "") : "\n");
	va_end(list);

}
