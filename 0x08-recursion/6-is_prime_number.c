#include "main.h"

/**
 * is_prime_number -  a function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: the number
 * @demo: int
 * Return: 1 if prime and 0 if not
 */
int check(int n, int demo);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - checks prime
 * @n: the num
 * @demo: the demo
 * Return: int
 */
int check(int n, int demo)
{
	if (demo >= n && n > 1)
	{
		return (1);
	}
	else if (n % demo == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(n, demo + 1));
	}
}
