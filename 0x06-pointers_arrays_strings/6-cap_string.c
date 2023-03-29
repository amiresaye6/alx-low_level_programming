#include "main.h"

/**
 * isLower - checks if the char is lower or not
 * @c: the char to check
 * Return: 1 if success and 0 if not
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * specialChar -  checks if the char is special or not
 * @c: the char to check
 * Return: 0 if not and 1 if yes
 */
int specialChar(char c)
{
	int i;
	char specialChar[] = " \t\n,;.!?\"(){}"

	for (i = 0; i < 12; i++)
	{
		if (c == specialChar[i])
			return (1);
		return (0);
	}
}

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: the string
 * Return: ptr
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int cond = 1;

	while (*s)
	{
		if (specialChar(*s))
			cond = 1;
		else if (isLower(*s) && cond)
		{
			*s -= 32;
			cond = 0;
		}
		else
			cond = 0;
		s++;
	}
	return (ptr);
}
