#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n chars froma n array seberated by , and ' '
 * @a: the array
 * @n: the number of cahrs to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
