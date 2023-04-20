#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: seperates words
 * @n: the number of words
 * @...: the list of words
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	int i = n;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (i--)
		printf("%s%s", (str = va_arg(list, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(list);

}
