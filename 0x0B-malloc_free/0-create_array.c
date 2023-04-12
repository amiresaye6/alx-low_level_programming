#include "main.h"
#include <stdio.h>

/**
 * create_array - a function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: intger
 *  @c: character
 *  Return: pointer to the array or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(size);
	if (size == 0 || ptr == 0)
	{
		return (0);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
