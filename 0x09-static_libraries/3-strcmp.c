#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if the two strings are the same
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			res = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (res);
}
