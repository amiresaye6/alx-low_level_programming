#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 * @c: the chare we want to chrck
 *
 * Return: 1 if c is uppercase, 0 if c is lowercase
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
