#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int l = 0, c = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	while (s1[l])
		l++;
	ptr = malloc(l + n + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[c])
	{
		ptr[c] = s1[c];
		c++;
	}
	while (j < n)
	{
		ptr[c] = s2[j];
		j++;
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
