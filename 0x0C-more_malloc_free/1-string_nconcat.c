#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer or null
 */
unsigned int length(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0, c = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	i = length(s1);
	j = length(s2);
	ptr = malloc(i + n + 1);
	if (!ptr)
		return (NULL);
	while (*s1)
	{
		ptr[c] = *s1;
		s1++;
		c++;
	}
	if (n >= j)
	{
		while (*s2)
		{
			ptr[c] = *s2;
			s2++;
			c++;
		}
	}
	else
	{
		while (j < n)
		{
			ptr[c] = *s2;
			s2++;
			c++;
			j++;
		}
	}
	ptr[c] = '\0';
	return (ptr);
}

/**
 * length - calculate the length of a string
 * @s: the string
 * Return: the length
 */

unsigned int length(char *s)
{
	unsigned int i;

	while (*s)
		i++;
	return (i);
}
