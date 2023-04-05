#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number.
 * @n: the num to get its root
 * @b: nothing
 * Return: the square root of n
 */
int result(int n, int b);
int _sqrt_recursion(int n)
{
	return (result(n, 1));
}
/**
 * result - secondary function
 * @n: one parameter
 * @b: another parameter
 * Return: any thing;
 */
int result(int n, int b)
{
	if (b * b == n)
	{
		return (b);
	}
	else if (b * b < n)
	{
		return (result(n, b + 1));
	}
	else
	{
		return (-1);
	}

}
