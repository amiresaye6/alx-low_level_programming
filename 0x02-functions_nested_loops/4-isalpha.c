#include "main.h"

/**
 * _isalpa - checks if the char is a letter or not
 * @c: the char we want to chick
 * Return: 1 if char, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
