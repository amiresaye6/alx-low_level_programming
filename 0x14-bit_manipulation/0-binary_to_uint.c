#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: the number in bynary form
 *
 * Return: unsigne converted intger or null.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result <<= 1;
		if (b[i] & 1)
			result++;
		i++;
	}
	return (result);
}
