#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc
 * and free
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *val;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	val = malloc(new_size);
	if (val == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	while (i < old_size)
	{
		*((char *)val + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (val);
}
