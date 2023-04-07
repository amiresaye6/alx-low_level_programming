#include "main.h"

/**
 * _abs - return the absolute value of an intger
 * @n: the number we want to chick
 * Return: returns the number after getting the absolute of it
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
