#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: pointer to the first elment to start from (int)
 * @size: the size of this array (size_t)
 * @value: the value to search for (int)
 *
 * Return: the index where it find the value or -1 if failed
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size < 1)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
