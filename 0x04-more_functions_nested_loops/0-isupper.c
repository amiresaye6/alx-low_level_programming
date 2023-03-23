#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 *
 * @c: the chare we want to chrck
 *
 * Return: 1 if c is uppercase, 0 if c is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
