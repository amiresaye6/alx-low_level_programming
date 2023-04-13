#include "main.h"
#include <stdlab.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: int
 * @size: int
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
