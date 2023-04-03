#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: aa
 * @needle: bbb
 * Return: loclationof substitg
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, k = i; needle[j] != '\0'; j++, k++)
		{
			if (needle[j] != haystack[k] || haystack[k] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
