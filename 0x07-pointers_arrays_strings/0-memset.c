#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the memory area pointer
 * @b: the content length
 * @n: the first n byts
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
