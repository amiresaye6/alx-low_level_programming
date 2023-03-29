#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 *  of integers.
 *  @a: the array
 *  @n: the length of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, s;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		s = a[i];
		a[i] = a[j];
		a[j] = s;
	}
}
