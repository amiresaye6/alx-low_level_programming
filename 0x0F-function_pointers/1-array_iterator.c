#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array:  array
 * @size:   the size of the array
 * @action: the function to be excuted
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && action && size)
		while (array <= e)
			action(*array++);
}
