#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the string we want to find the first occurense of
 * Return: Returns a pointer to the byte in s that matches one
 *  of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *res;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				res = &s[i + 1];
				return (res);
			}
		}
	}
	return (0);
}
