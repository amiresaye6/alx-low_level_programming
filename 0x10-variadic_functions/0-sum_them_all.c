#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of parameters to be enterd
 * @...: the ints to sum
 *
 * Return: the result
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0, i = n;
	va_list a;

	if (!n)
		return (0);
	va_start(a, n);
	while (i--)
		res += va_arg(a, int);
	va_end(a);
	return (res);
}
