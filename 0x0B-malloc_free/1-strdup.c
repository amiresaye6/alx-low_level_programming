#include "main.h"

/**
 * _strdup - doublicate a string
 * @str: the string to be dublicated
 * Return: a pointer to a new string or null if failed
 */
char *_strdup(char *str)
{
	int i = 0, s = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		s++;
		i++;
	}
	i = 0;
	ptr = malloc(s * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*str)
		{
			ptr[i] = *str;
			str++;
			i++;
		}
		ptr[i] = *str;
	}
	return (ptr);
}
