#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: the destance
 * @src: the place to copy from
 * @n: thenumber of byts to coppy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
