#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the second string to append
 * Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
