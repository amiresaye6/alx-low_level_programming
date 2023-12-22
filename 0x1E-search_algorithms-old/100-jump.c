#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array of integers using
 * the Jump search algorithm
 *
 * @array: pointer to the first elment (int)
 * @size: the size of this array (size_t)
 * @value: the value to search for (int)
 *
 * Return: the index where it find the value or -1 if failed
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), temp;
	size_t low = 0, high = low + jump;

	if (array != NULL && size > 0)
	{
		for (high = 0; high < size; high += jump)
		{
			if (value <= array[high] && value > array[low])
			{
				printf("Value found between indexes [%ld] and [%ld]\n", low, high);
				for (temp = low; temp <= high; temp++)
				{
					printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
					if (array[temp] == value)
						return (temp);
				}
			}
			else
			{
				if (array[high] < value)
				{
					low = high;
					if (high + jump > size)
						printf("Value found between indexes [%ld] and [%ld]\n",
						low, high + jump);
				}
				else if (array[high] == value)
					return (high);
				printf("Value checked array[%ld] = [%d]\n", high, array[high]);
			}
		}
	}
	return (-1);
}
