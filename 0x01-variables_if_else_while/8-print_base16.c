#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c = '0';

	for (i = 0; i < 16; i++)
	{
		if (c > '9')
		{
			c = 'a' + i - 10;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
