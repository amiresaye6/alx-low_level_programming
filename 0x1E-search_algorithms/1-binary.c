#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first elment to start from (int)
 * @size: the size of this array (size_t)
 * @value: the value to search for (int)
 *
 * Return: the index where it find the value or -1 if failed
*/

int binary_search(int *array, size_t size, int value)
{
	size_t middle = size / 2;

	if (array == NULL || size < 0)
		return (-1);

	if (array[middle] == value)
		return (middle);

	else if (array[middle] > value)
		binary_search(array[midd]);
	
}
