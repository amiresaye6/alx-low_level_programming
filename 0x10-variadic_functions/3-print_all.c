#include "variadic_functions.h"

/**
 * format_char - formats the char
 * @s: the seperator
 * @list: the argument pointer
 */

void format_char(char *s, va_list list)
{
	printf("%s%c", s, va_arg(list, int));
}

/**
 * format_int - formats the int
 * @s: the seperator
 * @list: the argument pointer
 */

void format_int(char *s, va_list list)
{
	printf("%s%d", s, va_arg(list, int));
}

/**
 * format_float - formats the float
 * @s: the seperator
 * @list: the argument pointer
 */

void format_float(char *s, va_list list)
{
	printf("%s%f", s, va_arg(list, double));
}

/**
 * format_string - formats the string
 * @s: the seperator
 * @list: the argument pointer
 */

void format_string(char *s, va_list list)
{
	char *str = va_arg(list, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", s, str);

}

/**
 * print_all - any thing
 * @format: the formate
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *s = "";
	va_list list;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(s, list);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

