#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c:  the characer enterd
 *
 * Return: 1 if lower, 0 if upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
