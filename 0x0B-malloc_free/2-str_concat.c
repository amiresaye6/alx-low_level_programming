#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new string with these stings together
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 1, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NUll)
	{
		s2 = "";
	}
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = malloc((i + j) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (*s1)
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		ptr[i + j] = *s2;
		s2++;
		j++;
	}
	ptr[i + j] = *s2;
	return (ptr);
}
