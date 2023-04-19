#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array
 * @size:  size
 * @cmp:   pointer function
 *
 * Return: index of the first element, 0, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
