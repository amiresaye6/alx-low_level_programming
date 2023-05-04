#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: int number
 * @m: unsigned long int number
 *
 * Return: the number of bytes (int)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int index, temp;

	temp = n ^ m;
	for (index = 0; temp != 0; index++)
		temp &= (temp - 1);
	return (index);
}
