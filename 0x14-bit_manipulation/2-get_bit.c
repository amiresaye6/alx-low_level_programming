#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @index: the index of the bit we want
 * @n: the number
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
