#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the second string to append
 * @n: the number of characters to copy
 * Return: the new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
