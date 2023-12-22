#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first elment (int)
 * @size: the size of this array (size_t)
 * @value: the value to search for (int)
 *
 * Return: the index where it find the value or -1 if failed
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array != NULL && size > 0)
	{
		while (left <= right)
		{
			size_t middle = left + (right - left) / 2;

			print_array(array, left, right);

			if (array[middle] == value)
				return (middle);
			if (array[middle] > value)
				right = middle - 1;
			else
				left = middle + 1;
		}
	}

	return (-1);
}

/**
 * print_array - helper function to print array
 * @array: pointer to the first elment (int)
 * @start: the starting index (size_t)
 * @end: the ending index (size_t)
 *
 *Return: (void)
*/

void print_array(int *array, size_t start, size_t end)
{
	char *delemeter = " ";

	if (array != NULL)
	{
		printf("Searching in array:");
		while (start <= end)
		{
			printf("%s%d", delemeter, array[start++]);
			delemeter = ", ";
		}
		printf("\n");
	}
}
