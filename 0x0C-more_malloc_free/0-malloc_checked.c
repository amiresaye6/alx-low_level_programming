#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the number or bytes to assign
 * Return: pointer or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
