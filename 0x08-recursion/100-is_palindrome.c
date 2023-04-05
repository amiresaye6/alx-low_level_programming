#include "main.h"

/**
 * last - gets the length of a string
 * @s: the string
 * Return: returns int
 */
int checker(char *s, int st, int en, int m);
int is_palindrome(char *s);
int last(char *s)
{
	int num = 0;

	if (*s > '\0')
		num += last(s + 1) + 1;
	return (num);
}

/**
 * is_palindrome -  a function checks if a string is palindrome
 * @s: the string
 * Return: 1, 0
 */
int is_palindrome(char *s)
{
	return (checker(s, 0, en - 1, en % 2));
}

/**
 * checker - checks
 * @s: the string
 * @st: start
 * @en: end
 * @m: mod
 * Return: 0, 1
 */
int checker(char *s, int st, int en, int m)
{
	if ((st == en && m != 0) || (st == en + 1 && m == 0))
	{
		return (1);
	}
	else if (s[st] != s[en])
	{
		return (0);
	}
	else
	{
		return (checker(s, st + 1, en - 1, m));
	}
}
