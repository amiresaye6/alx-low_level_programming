#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search - searches for a value in an array of integers using
 * the Interpolation search algorithm
 *
 * @array: pointer to the first elment (int)
 * @size: the size of this array (size_t)
 * @value: the value to search for (int)
 *
 * Return: the index where it find the value or -1 if failed
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL || size < 1)
		return (-1);

	while (1)
	{
		size_t pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
