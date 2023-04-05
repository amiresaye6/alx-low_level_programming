#include "main.h"

/**
* factorial - a function that returns the factorial of a given number
* @n: the num we want to git its factorial
* Return: integer
*/

int factorial(int n)
{

	if ((n == 1) || (n == 0))
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

