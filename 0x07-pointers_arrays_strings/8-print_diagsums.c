#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *  of a square matrix of integers
 * @a: the array
 * @size: the size
 */
void print_diagsums(int *a, int size)
{
	int i, s = 0, ss = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		ss += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s);
	printf("%d\n", ss);
}
